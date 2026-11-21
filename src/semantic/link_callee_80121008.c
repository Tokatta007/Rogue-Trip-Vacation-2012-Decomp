/* Rogue Trip match setup: give a player its car, reconstructed from the
 * retail instructions at 80121008. PsyQ 4.4, -O2 -G8 -fvolatile (retail
 * re-reads the slot and player car pointers). See docs/LINK_CABLE.md
 * (Layer 3, Layer 4). */

typedef struct {
    char pad0[0x78];
    int unk78;                  /* +0x78: set from the fifth argument */
    char pad7C[0x8B8 - 0x7C];
} Car;

typedef struct {
    char pad0[0xB768];
    int car_kind[8];            /* +0xB768: per car slot, 1 = player car */
    Car car[4];                 /* +0xB788: 0x8B8 bytes each */
    char pad[0x1240C - 0xB788 - 4 * 0x8B8];
    char *player_car[4];        /* +0x1240C: per player */
    char *slot_car[0x9C];       /* +0x1241C: per car slot */
    int slot_model[8];          /* +0x1268C */
    int slot_taken[8];          /* +0x126AC */
    int slot_world[8];          /* +0x126CC: index in the world table */
    int slot_player[8];         /* +0x126EC */
    int slot_count;             /* +0x1270C */
    int pad12710[2];
    int player_slot[4];         /* +0x12718 */
} Game;

extern int **D_801C34F0;    /* world object table (first word of an object -> car + 0x1C) */

extern void func_8012EB68(Car *car, char *model, int player, int model_id, void *a4, int world);
extern void func_8011FF4C(Game *game, int player);
extern void func_80123058(Game *game, int view, int slot);

#define CAR(g, p) ((Car *) ((char *) (g) + 0xB788) + (p))

static inline int slot_free(Game *game, int i, int model)
{
    return game->slot_model[i] == model && game->slot_taken[i] == 0;
}

/* Give PLAYER the first free car slot of MODEL: mark it taken, link the
 * player and the slot both ways, set up the car record (8012EB68; in a link
 * game it leaves the hit points unscaled), 8011FF4C, point the slot's world
 * object at the car, store A4 at car +0x78 and, if VIEW >= 0, attach a
 * camera view (80123058). The match setup 80136EA4 gives this console's
 * players views 0/1 and the partner's (remote) players -1, so remote cars
 * get a car record but no view. Top-tested while (1) loop; the world
 * object pointer goes through the local PP (keeps retail's addu order). */
void __attribute__((section(".text_80121008"))) func_80121008(Game *game, int player, int model, int view, int a4)
{
    int i;
    int **pp;

    i = 0;
    while (1) {
        if (!(i < game->slot_count))
            break;
        if (slot_free(game, i, model)) {
            game->slot_taken[i] = 1;
            game->player_slot[player] = i;
            if (game->slot_car[i]) {
                game->player_car[player] = game->slot_car[i];
                game->player_car[player][0xC] = 1;
            }
            game->car_kind[i] = 1;
            game->slot_player[i] = player;
            func_8012EB68(CAR(game, player), game->player_car[player], player, model,
                          (char *) game + 0x15CC, game->slot_world[i]);
            func_8011FF4C(game, player);
            pp = D_801C34F0 + game->slot_world[i];
            **pp = (int) (game->player_car[player] + 0x1C);
            CAR(game, player)->unk78 = a4;
            if (view >= 0)
                func_80123058(game, view, i);
            return;
        }
        i++;
    }
}
