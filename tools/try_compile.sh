#!/bin/sh
# Compile one C file with the project flags and disassemble the object (.text*).
# usage: tools/try_compile.sh file.c [assembler|compiler]
ROOT=$(cd "$(dirname "$0")/.." && pwd)
OUT=$(mktemp -d "$ROOT/work/try-XXXXXX")
"$ROOT/toolchain/python/python.exe" -B - "$1" "$OUT" "${2:-assembler}" <<'PY'
import sys
from pathlib import Path
sys.path.insert(0, str(Path(sys.argv[0]).resolve().parent / 'tools') if False else 'tools')
from semantic_compile import compile_source
r = compile_source(Path(sys.argv[1]).resolve(), Path(sys.argv[2]) / 'c', sys.argv[3])
if not r['compiled']:
    print('FAILED', r.get('failed_stage'), (Path(sys.argv[2]) / 'c' / (r.get('failed_stage', 'cc1') + '.stderr')).read_text(errors='replace'))
PY
[ -f "$OUT/c/source.o" ] && "$ROOT/toolchain/mips/bin/mipsel-none-elf-objdump.exe" -d -z "$OUT/c/source.o" | grep -E '^\s+[0-9a-f]+:' | sed -E 's/^\s+([0-9a-f]+):\s+([0-9a-f]{8})\s+/\1 \2 /'
rm -rf "$OUT"
