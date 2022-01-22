#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define BOARD_WIDTH 10
#define BOARD_HEIGHT 22
#define ADRESS_AMOUNT 10
#define MATRIX_SYMBOL '.'

typedef struct _letter_struct {
    char letter;
    char life_time;
} my_letter;

void print_matrix(char *);
void init_matrix(char *);


int main(int argc, char const *argv[])
{
    //create basic tab
    char matrix[BOARD_WIDTH][BOARD_HEIGHT] = {0};
    //tabela na adresy
    char * adres[2];
    //gdzie ustawic kursor przed print_matrix
    COORD cur = {0, 0};
    // sleep time in miliseconds
    int sleep_time = 100;
    int counter = 0;

    adres[0] = (char *) matrix + 2;
    adres[1] = (char *) matrix + 4;

    //system("cls");
    init_matrix((char *) matrix);

    while (1)
    {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cur);
        print_matrix((char*)matrix);
        printf("%d\n", counter++);

        overwrite_matrix((char*)matrix, (char*) * adres, '@');



        Sleep(sleep_time);   
    }
    return 0;
}
void overwrite_matrix(char * _p_element, char * adres_in, char symbol)
{
        _p_element = adres_in;
        *_p_element = symbol;
        _p_element = adres_in+1;
        *_p_element = symbol;
}


void print_matrix(char * _p_element)
{
    for (int i = 0; i < BOARD_HEIGHT; i++)
    {
        for (int j = 0; j < BOARD_WIDTH; j++)
        {
           printf("%c", *(_p_element+j));
        }
        puts(" ");
        _p_element += BOARD_WIDTH;
    }
}

void init_matrix(char * _p_element)
{
    for (int i = 0; i < BOARD_HEIGHT; i++)
    {
        for (int j = 0; j < BOARD_WIDTH; j++)
        {
            *(_p_element+j) = MATRIX_SYMBOL;
        }
        _p_element += BOARD_WIDTH;
    }
}
