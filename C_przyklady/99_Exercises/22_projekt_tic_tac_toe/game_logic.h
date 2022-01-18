int process_game_logic(int * game_stage, char * dane, game_state * gm_st_tab_in);
void init_game_logic(int * game_stage, game_state* gm_st_tab_in);

int check_win_condition(int game_stage, char player_symbol, game_state * gm_st_tab_in, int x, int y);
void prepare_next_stage(int game_stage, game_state * gm_st_tab_in);


