#!/usr/bin/env python3
"""Read-only ISO9660 lister/extractor for a MODE2/2352 PSX data track."""
import argparse, struct
from pathlib import Path

RAW, USER = 2352, 2048

def sector(f, lba):
    f.seek(lba * RAW)
    raw = f.read(RAW)
    return raw[24:24 + USER]          # Mode 2 Form 1: 12 sync + 4 hdr + 8 subhdr

def read_extent(f, lba, size):
    out = bytearray()
    while len(out) < size:
        out += sector(f, lba); lba += 1
    return bytes(out[:size])

def walk(f, lba, size, prefix=''):
    data = read_extent(f, lba, size); pos = 0
    while pos < len(data):
        n = data[pos]
        if n == 0:                    # records never straddle sectors
            pos = (pos // USER + 1) * USER; continue
        rec = data[pos:pos + n]
        elba, esize = struct.unpack_from('<I', rec, 2)[0], struct.unpack_from('<I', rec, 10)[0]
        flags, nlen = rec[25], rec[32]
        name = rec[33:33 + nlen]
        pos += n
        if name in (b'\0', b'\1'): continue
        name = name.decode('ascii').split(';')[0]
        path = prefix + name
        if flags & 2:
            yield from walk(f, elba, esize, path + '/')
        else:
            yield path, elba, esize

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('bin', type=Path)
    p.add_argument('--extract', nargs='*', default=[])
    p.add_argument('--out', type=Path, default=Path('.'))
    a = p.parse_args()
    with a.bin.open('rb') as f:
        pvd = sector(f, 16)
        assert pvd[1:6] == b'CD001', 'no ISO9660 PVD'
        root = pvd[156:156 + 34]
        files = list(walk(f, struct.unpack_from('<I', root, 2)[0], struct.unpack_from('<I', root, 10)[0]))
        for path, lba, size in files:
            print('%-40s lba=%-7d size=%d' % (path, lba, size))
        for want in a.extract:
            for path, lba, size in files:
                if path.upper() == want.upper():
                    dst = a.out / Path(path).name
                    dst.parent.mkdir(parents=True, exist_ok=True)
                    dst.write_bytes(read_extent(f, lba, size))
                    print('extracted', dst)

if __name__ == '__main__':
    main()
