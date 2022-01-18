#include <stdio.h>
#include "main.h"
#include "g_logic_go_back.h"
#include "g_logic_move.h"
//rozwazyc zastosowanie enum dla lepesz czytlenosci
void prepare_next_stage(int game_stage, game_state * gm_st_tab_in)
{
    gm_st_tab_in[game_stage+1] = gm_st_tab_in[game_stage] ;
};

int check_win_condition(int game_stage, char player_symbol, game_state * gm_st_tab_in, int x, int y)
{
    char a = 3, b = 3, c = 3, d = 3;
    //pionowo
    for (char i = 0; i < 3; i++)
    {
        if (gm_st_tab_in[game_stage].game_tiles[i][y] == player_symbol) a--;
    }
    //poziomo
    for (char i = 0; i < 3; i++)
    {
        if (gm_st_tab_in[game_stage].game_tiles[x][i] == player_symbol) b--;
    }
    //po skosie -45st
    if (x == y)
    {
        for (char i = 0; i < 3; i++)
        {
            if (gm_st_tab_in[game_stage].game_tiles[i][i] == player_symbol) c--;
        }   
    }
    //po skosie 45st
    if (x == (2 - y))
    {
        for (char i = 0; i < 3; i++)
        {
            if (gm_st_tab_in[game_stage].game_tiles[2-i][i] == player_symbol) d--;
        }    
    }
    if (a == 0 || b == 0 || c == 0 || d == 0)
    {
        printf("koniec gry\n");
        gm_st_tab_in[game_stage].is_game_finished = 1;
        return 1;
    }
    if (game_stage == 8)
    {
        gm_st_tab_in[game_stage].is_game_finished = 1;
        printf("remis\n");
        return 2;
    }
    if (gm_st_tab_in[game_stage].is_game_finished == 0)
        printf("gra trwa dalej\n");
    return 0;        
}

int process_game_logic(int * game_stage, char * dane, game_state * gm_st_tab_in) 
{
    printf("LOGIKA: zglasza sie\n");
    //przerob dane z klawiatury na liczby
    //-1 bo przesuniecie z 012 do 123, zeby klawiaturowe 123 odpowiadalo adresowemu 012
    char user_action = dane[0];
    int d1 = ( (int) dane[1] ) - (int)'0' - 1;
    int d2 = ( (int) dane[2] ) - (int)'0' - 1;
    int is_finished = 0;

    char symbol = 'x';
    if ((*game_stage % 2) == 0)
        symbol = 'o';
    
    switch(user_action)
    {
        //ruch
        case 'r':
            //jesli ruch nie jest mozliwy pomin logike
            if (check_if_empty(*game_stage, gm_st_tab_in, d1 ,d2) == -1) 
                return 0;
            else
                make_move(*game_stage, symbol, gm_st_tab_in, d1, d2);
            break;
        //przewin gre do tylu
        case 'c':
            *game_stage = d1;
            break;
    }
    
    is_finished = check_win_condition(*game_stage, symbol, gm_st_tab_in, d1, d2);
    
    if (is_finished == 0)
        prepare_next_stage(*game_stage, gm_st_tab_in);
    else
        return (is_finished);
};

void init_game_logic(int * game_stage, game_state* gm_st_tab_in)
{
    *game_stage = 0;
    gm_st_tab_in[0].is_game_finished = 0;

    for (int state = 0; state < 9; state++)
    {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    gm_st_tab_in[state].game_tiles[i][j] = ' ';
                };
            };
    }
};