#include "main.h"
#include "stdio.h"

void make_move(int game_stage, char player_symbol, game_state * gm_st_tab_in, int x, int y)
{
    //sprawdzenie
    // printf("MAKE MOVE: dane do ruchu to x: %d, y: %d\n", x, y);

    //put symbol into game_struct[stage].tile
    gm_st_tab_in[game_stage].game_tiles[x][y] = player_symbol;
    
};

int check_if_empty(int game_stage, game_state * gm_st_tab_in, int x, int y) 
{
    if (gm_st_tab_in[game_stage].game_tiles[x][y] == ' ')
        {
            printf("E: 0\n");       
            return 0;
        }
    else
        {
            printf("E: -1\n");
            return -1;
        }
}