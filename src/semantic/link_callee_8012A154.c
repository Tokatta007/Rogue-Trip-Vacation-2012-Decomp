/* Rogue Trip hit dispatcher for level objects, reconstructed from the retail
 * instructions at 8012A154 (jump table at 800F3734). PsyQ 4.4, -O2 -G8.
 * See docs/LINK_CABLE.md (Layer 2b, Layer 4). */

/* World object table: object pointers from +0, their kinds (1..28) from
 * +1000 (0x3E8), the object count at +2000 (0x7D0). The two arrays are
 * volatile: retail loads the object before its kind (plain fields let the
 * scheduler hoist the kind load). */
typedef struct {
    void *volatile obj[250];
    volatile int kind[250];
    int count;
} World;

typedef struct {
    char pad0[0xB768];
    int car_kind[8];            /* +0xB768: per car slot, 1 or 2 */
} Game;

extern Game *D_801C34EC;                    /* game data */

extern void func_8014662C(void *o, int a1, int a2, int a3);
extern void func_800FCC68(void *o, int a1, int a2, int a3);
extern void func_80140D70(void *o, int a1, int a2, int a3);
extern void func_801F8C38(void *o, int a1, int a2, int a3);
extern void func_801168B4(void *o, int a1, int a2, int a3);
extern void func_801F8D40(void *o, int a1, int a2, int a3);
extern void func_801F76B8(void *o, int a1, int a2, int a3);
extern void func_801F8784(void *o, int a1, int a2, int a3);
extern void func_801F59A8(void *o, int a1, int a2, int a3);
extern void func_801F67BC(void *o, int a1, int a2, int a3);
extern void func_801F5DA0(void *o, int a1, int a2, int a3);
extern void func_801F7254(void *o, int a1, int a2, int a3);
extern void func_801F6B88(void *o, int a1, int a2, int a3);
extern void func_801F65C0(void *o, int a1, int a2, int a3);
extern void func_801F55B8(void *o, int a1, int a2, int a3);
extern void func_801F9D9C(void *o, int a1, int a2, int a3);
extern void func_801F55C8(void *o, int a1, int a2, int a3);
extern void func_801F7A54(void *o, int a1, int a2, int a3);
extern void func_801F6F34(void *o, int a1, int a2, int a3);
extern void func_801F67D4(void *o, int a1, int a2, int a3);
extern void func_801F556C(void *o, int a1, int a2, int a3);
extern void func_801F58D0(void *o, int a1, int a2, int a3);
extern void func_801F5DE8(void *o, int a1, int a2, int a3);
extern void func_801F5A58(void *o, int a1, int a2, int a3);
extern void func_801F5550(void *o, int a1, int a2, int a3);
extern void func_801FB668(void *o, int a1, int a2, int a3);
extern void func_801FAC24(void *o, int a1, int a2, int a3);
extern void func_8011A4AC(void *o, int a1, int a2, int a3);
extern void func_8012EA50(void *o, int a1, int a2, int a3);

/* Hit object SLOT of world W (slots 0/1 are skipped): call the damage
 * handler of its kind with (object, A1, DAMAGE, CAUSE). Kind 1 (a car)
 * picks its handler from the car's word +0xB768 (1: 8014662C, 2:
 * 800FCC68); kinds 2, 3 and 25 pass the enclosing record (object - 0x74);
 * kind 27 is a destructible level object (8011A4AC, which queues link event
 * B), kind 28 a pickup (8012EA50). The link receiver 8012D45C replays the
 * partner's event B as (D_801C34F0, 0, 1, 30, slot, 0): cause 30 destroys
 * the same object without sending it back. */
/* Handler kind of the car O (game word +0xB768 indexed by the car's player
 * number at +0x7C8). An inline helper: its return value is copied into T,
 * which gives retail's `move t0,v1` for the second compare. */
static inline int car_kind_of(void *o)
{
    return D_801C34EC->car_kind[*(int *) ((char *) o + 0x7C8)];
}

#define BASE(o) ((o) ? (void *) ((char *) (o) - 0x74) : 0)

void __attribute__((section(".text_8012A154"))) func_8012A154(World *w, int a1, int damage, int cause,
                                                             int slot)
{
    void *o;
    int t;

    if (slot < 2 || slot >= w->count)
        return;
    o = w->obj[slot];
    switch (w->kind[slot]) {
    case 1:     /* car: handler by the car's kind */
        t = car_kind_of(o);
        if (t == 1)
            func_8014662C(o, a1, damage, cause);
        else if (t == 2)
            func_800FCC68(o, a1, damage, cause);
        break;
    case 25: func_80140D70(BASE(o), a1, damage, cause); break;
    case 26: func_801F8C38(o, a1, damage, cause); break;
    case 2:  func_801168B4(BASE(o), a1, damage, cause); break;
    case 3:  func_801F8D40(BASE(o), a1, damage, cause); break;
    case 4:  func_801F76B8(o, a1, damage, cause); break;
    case 5:  func_801F8784(o, a1, damage, cause); break;
    case 6:  func_801F59A8(o, a1, damage, cause); break;
    case 11: func_801F67BC(o, a1, damage, cause); break;
    case 12: func_801F5DA0(o, a1, damage, cause); break;
    case 7:  func_801F7254(o, a1, damage, cause); break;
    case 8:  func_801F6B88(o, a1, damage, cause); break;
    case 9:  func_801F65C0(o, a1, damage, cause); break;
    case 10: func_801F55B8(o, a1, damage, cause); break;
    case 13: func_801F9D9C(o, a1, damage, cause); break;
    case 14: func_801F55C8(o, a1, damage, cause); break;
    case 15: func_801F7A54(o, a1, damage, cause); break;
    case 16: func_801F6F34(o, a1, damage, cause); break;
    case 17: func_801F67D4(o, a1, damage, cause); break;
    case 18: func_801F556C(o, a1, damage, cause); break;
    case 19: func_801F58D0(o, a1, damage, cause); break;
    case 20: func_801F5DE8(o, a1, damage, cause); break;
    case 21: func_801F5A58(o, a1, damage, cause); break;
    case 22: func_801F5550(o, a1, damage, cause); break;
    case 23: func_801FB668(o, a1, damage, cause); break;
    case 24: func_801FAC24(o, a1, damage, cause); break;
    case 27: func_8011A4AC(o, a1, damage, cause); break;
    case 28: func_8012EA50(o, a1, damage, cause); break;
    }
}
