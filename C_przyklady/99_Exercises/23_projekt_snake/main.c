#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define SNAKE_LENGHT 5
#define BOARDSIZE_ROWS 20
#define BOARDSIDE_COLS 40
#define START_POS_X (BOARDSIDE_COLS/2)
#define START_POS_Y (BOARDSIZE_ROWS/2)
#define SYMBOL_JEDZENIA '~'
#define SYMBOL_GLOWY '#'
enum kierunek {gora, dol, lewo, prawo};

void write_chars(char * board_in, int row_amount, int row_lenght, char symbol)
{
    for (int i = 0; i < row_amount; i++)
    {
        for (int j = 0; j < row_lenght; j++)
        {
            if (board_in[j] <= '0')
                board_in[j] = symbol;
        }
        board_in += row_lenght;
    }
}

void clear_middle(char * board_in, int row_amount, int row_lenght, char symbol)
{
    //pomin w1, bo petla for od i= 1
    board_in += row_lenght;
    for (int i = 1; i < row_amount-1; i++)
    {
        for (int j = 1; j < row_lenght-1; j++)
            {
                if (board_in[j] <= '0')
                    board_in[j] = symbol;
            }
        board_in += row_lenght;
    }
}

void add_snake_food(char * board_in, int row_amount, int row_lenght, char symbol, char * is_food_eaten_in)
{
    if (*is_food_eaten_in == 1)
        {
        char x_food_pos = 1 + rand()%( row_amount - 2 );
        char y_food_pos = 1 + rand()%( row_lenght - 2 );
        board_in += y_food_pos + x_food_pos * row_lenght;
            while (*board_in != ' ')
            {
                char x_food_pos = 1 + rand()%( row_amount - 2 );
                char y_food_pos = 1 + rand()%( row_lenght - 2 );
                board_in += y_food_pos + x_food_pos * row_lenght;
            }
        *board_in = symbol;
        *is_food_eaten_in = 0;
        }
    else return;
}

void add_snake_head
(char * board_in, int row_amount, int row_lenght, char symbol, char x_in, char y_in, char * snake_len_in, char * is_food_eaten_in)
{
    board_in += x_in + y_in * row_lenght;
    if (*board_in == SYMBOL_JEDZENIA)
    {
        *is_food_eaten_in = 1;
        *snake_len_in += 1;
    }
    *board_in = symbol;
}

void move_snake
(char * board_in, int row_amount, int row_lenght, enum kierunek ruch_in, char * x_in, char * y_in, char * snake_len_in)
{
    board_in += (*x_in) + (*y_in) * row_lenght;
    switch (ruch_in)
    {
        case gora:
            *y_in -= 1;
            break;
        case dol:
            *y_in += 1;
            break;
        case lewo:
            *x_in -= 1;
            break;
        case prawo:
            *x_in += 1;
            break;
    }
    //if owocek in new pos -> '6'
    *board_in = *snake_len_in - 1 + '0';
}
void clean_up_snake_body(char * board_in, int row_amount, int row_lenght)
{
    //pomin w1, bo petla for od i= 1
    board_in += row_lenght;
    for (int i = 1; i < row_amount-1; i++)
    {
        for (int j = 1; j < row_lenght-1; j++)
            {
                if ((board_in[j] > '0') && (board_in[j] != SYMBOL_JEDZENIA))
                    board_in[j] -= 1;
            }
        board_in += row_lenght;
    }
}

void draw_game(char * board_in, int row_amount, int row_lenght)
{
    for (int i = 0; i < row_amount; i++)
    {
        for (int j = 0; j < row_lenght; j++)
        {
            printf("%c ", board_in[j]);
        }
        board_in += row_lenght;
        printf("\n");
    }
}

void input(enum kierunek * ruch_in)
{
    if (kbhit()) {
        switch (getch()) {
        case 'a':
            *ruch_in = lewo;
            break;
        case 's':
            *ruch_in = dol;
            break;
        case 'd':
            *ruch_in = prawo;
            break;
        case 'w':
            *ruch_in = gora;
            break;
        }
    }
}
check_collision (char * board_in, int row_amount, int row_lenght, char * x_in, char * y_in)
{
    if ( *y_in == 0 || *y_in == (row_amount - 1) ){
        *x_in = START_POS_X;
        *y_in = START_POS_Y;
    }
    if ( *x_in == 0 || *x_in == (row_lenght - 1) ){
        *x_in = START_POS_X;
        *y_in = START_POS_Y;
    }
}


int main(int argc, char const *argv[])
{
    char game_board[BOARDSIZE_ROWS][BOARDSIDE_COLS]={0};
    char pos_x = START_POS_X;
    char pos_y = START_POS_Y;
    enum kierunek ruch = prawo;
    //daje na 1, bo funkcja tworzaca food potrzebuje jedynki do inicjalizacji 
    char is_food_eaten = 1;
    //snake_len 3 daje 2 :), zawsze o jeden mniej
    char snake_len = 3;

write_chars         ((char *)game_board, BOARDSIZE_ROWS, BOARDSIDE_COLS, '*');
    while(1)
    { 
system("cls");
input(&ruch);

clear_middle        ((char *)game_board, BOARDSIZE_ROWS, BOARDSIDE_COLS, ' ');
add_snake_food      ((char *)game_board, BOARDSIZE_ROWS, BOARDSIDE_COLS, SYMBOL_JEDZENIA, &is_food_eaten);
move_snake          ((char *)game_board, BOARDSIZE_ROWS, BOARDSIDE_COLS, ruch, &pos_x, &pos_y, &snake_len);
add_snake_head      ((char *)game_board, BOARDSIZE_ROWS, BOARDSIDE_COLS, SYMBOL_GLOWY, pos_x, pos_y, &snake_len, &is_food_eaten);
clean_up_snake_body ((char *)game_board, BOARDSIZE_ROWS, BOARDSIDE_COLS);
draw_game           ((char *)game_board, BOARDSIZE_ROWS, BOARDSIDE_COLS);
check_collision     ((char *)game_board, BOARDSIZE_ROWS, BOARDSIDE_COLS, &pos_x, &pos_y);
printf("poz x %d, poz y %d\nruch %d", pos_x, pos_y, ruch);
Sleep(60);
    }
    return 0;
}
