#include <stdio.h>
#include <windows.h>

#include "main.h"

#include "game_logic.h"
#include "graphic.h"
#include "user_input.h"

#define BOARD_SIDE_LEN 5
#define USR_IPT_LEN 4
#define STATE_TABLE_LEN 9

//pause game to check console output
void debug_check()
{
	printf("czy przejsc do nastepnej interacji? (t)\n");
	char c = 'a';
	while (1)
	{
		c = getchar();
		if (c == 't' || c == 'T') break; 
	}
}

void init_functions(game_state *game_state_table, char * game_board, int * game_stage)
{
	overwrite_mem_for_board((char *)game_board);
	create_board((char *)game_board);
	draw_board((char*)game_board);
	init_game_logic(game_stage, game_state_table);
};

int main()
{	
	game_state game_state_table[STATE_TABLE_LEN];
	char game_board[BOARD_SIDE_LEN][BOARD_SIDE_LEN];
	int game_stage;
	char user_input[USR_IPT_LEN];
	//ustaw ostatni element na null (mozna korzystac z %s)
	user_input[3]= NULL;

	start: init_functions(game_state_table, (char *)game_board, &game_stage);

	do
	{
		write_instructions();
		get_user_input(user_input, game_stage);
		if (user_input[0] == 'x' || user_input[0] == 'X') goto start;
		int message_id = process_game_logic(&game_stage, user_input, game_state_table);
		debug_check();
		update_board((char*)game_board, game_stage, game_state_table);
		draw_board((char*)game_board);
		write_message(message_id);
	} 
	while (game_state_table[game_stage++].is_game_finished == 0);

	printf("\nKONIEC GRY\n\n");
	Sleep(5000);
	goto start;
}