#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define bSIZE 5

void write_instructions()
{
	printf("\nInstrukcja: r = ruch, c = cofanie, x = zacznij od nowa,\n");
    printf("Wprowadz polecenie: ");
}
void write_message(int message_id)
{
	switch(message_id)
	{
		//remis
		case 2:
			printf("\nGra zakonczona remisem.\n");
			break;
		//wygranko
		case 1:
			printf("\nGra zakonczona przez zwyciestwo\n");
			break;
	}
}

void draw_board(char *board)
{
	system("cls");
	printf("\n");
	for (int row = 0; row < bSIZE; row++)
    {
		printf("  ");
		for (int col = 0; col < bSIZE; col++)
			{
				printf("%c ", *(board+row*5+col));
			}
		printf("\n");
    }
}

void update_board(char *board, int game_stage, game_state * game_state_table)
{
	//te dwojki w forze sa z niedopasowania tablic2d
	for (int row = 0; row < bSIZE; row += 2)
	{
		for (int col = 0; col < bSIZE; col += 2)
		{	
			board[col] = game_state_table[game_stage].game_tiles[row/2][col/2];
		}
		board += bSIZE*2;
	}

}

void overwrite_mem_for_board(char *board)
{
	for (int row = 0; row < bSIZE; row++)
	{
		for (int col = 0; col < bSIZE; col++)
		{
			*(board+row*5+col) = ' ';
		}		
	}
}

void create_board(char *board)
{
	for (int row = 0; row < bSIZE; row++)
	{
		for (int col = 0; col < bSIZE; col++)
		{	
			//kazdy wiersz

			//parzysty wiersz
			if (row % 2 == 0)
			{
				//parzysty W parzysta K
				
				//parzysty W nieparzysta K (W: 0, 2, 4) "pion"
				if (col % 2 == 1)
				{
					*(board+row*5+col) = '|';
				}
			}
			//nieparzysty wiersz (W: 1, 3)
			if (row % 2 == 1)
			{
				
				//nieparzysty W parzysta K "poziom"
				if (col % 2 == 0)
				{
					*(board+row*5+col) = '-';
				}
				//nieparzysty W nieparzysta K "laczenia"
				if (col % 2 == 1)
				{
					*(board+row*5+col) = '+';
				}
			}
		}		
	}
}