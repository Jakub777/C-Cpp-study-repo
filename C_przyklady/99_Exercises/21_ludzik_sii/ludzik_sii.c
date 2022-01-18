#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>
#include <windows.h>

// set to 0 for Sleep(20), set to 1 for getchar() as main() last line
int debug = 0;

#define SIZE_X 40
#define SIZE_Y 17
#define LUDZIK_X 5
#define LUDZIK_Y 4
#define BORDER_SIZE 3

#define START_X ((SIZE_X) / 2) - (LUDZIK_X / 2)
#define START_Y ((SIZE_Y + 1) / 2) - (LUDZIK_Y / 2)

#define MAX_POS_X (SIZE_X -BORDER_SIZE -LUDZIK_X)
#define MAX_POS_Y (SIZE_Y -BORDER_SIZE -LUDZIK_Y)

//rysuje matrixa w konsoli
void print_array_sii(char *tab, uint8_t size_x, uint8_t size_y )
{
    for(int i = 0; i< size_y; i++)
    {
        for(int j = 0; j< size_x; j++)
        {
            fprintf(stdout,"%c ", tab[j]);
        }
        fprintf(stdout,"\n");
        tab += size_x;
    }
}
//wypisuje znaki z argumentu na calej planszy
void clear_array(char *tab, uint8_t size_x, uint8_t size_y, char val)
{
    for(int i = 0; i< size_y; i++)
    {
        for(int j = 0; j< size_x; j++)
        {
            tab[j] = val;
        }
        tab += size_x;
    }
}
//wywoluje clear array i potem czysci srodek matrixa zostawiajac ramke
void add_frame(char *tab, uint8_t size_x, uint8_t size_y )
{
    tab += (BORDER_SIZE) * size_x;
    for(int i = 0; i< size_y - (2 * BORDER_SIZE); i++)
    {
        for(int j = BORDER_SIZE; j< size_x - BORDER_SIZE; j++)
        {
            tab[j] = ' ';
        }
        tab += size_x;
    }
}
//tworzy tlo (w pamieci)
void create_world(char *tab, uint8_t size_x, uint8_t size_y )
{
    system("cls");
    clear_array(tab, size_x, size_y, '*');
    add_frame(tab, size_x, size_y);
}
//dodaje ziomka do matrixa
void add_man(char *tab, uint8_t size_x, uint8_t size_y, uint8_t poz_x, uint8_t poz_y )
{
    char arr[4][5] =
    {
            {'(' ,'^','_','^' ,')'},
            {'\\','S','i','i' ,'/'},
            {' ' ,' ','|',' ' ,' '},
            {' ' ,'/',' ','\\',' '}
    };

    char *ptr_y;

    //pod tab nr wiersza dla elementu (os Y) [0][0] ludzika
    tab += size_x*poz_y;

    for (int i=0; i<4; i++)
    {
        //ustawia wskaznik na odpowiedniej pozycji osi X dla [0][0] ludzika
        ptr_y = tab + poz_x;

        for (int j=0; j<5; j++)
        {
            {
                *ptr_y=arr[i][j];
            }
            ptr_y +=1;
        }
        tab += size_x;
    }
}
void update_x_pos(char * x_pos)
{   
    if (!(SIZE_X <= LUDZIK_X + 2 * BORDER_SIZE))
    {
        char static krok_x = 1;
        if (*x_pos == BORDER_SIZE)
            krok_x = 1;
        if (*x_pos == MAX_POS_X)
            krok_x = -1;
        *x_pos += krok_x;
    }
}
void update_y_pos(char * y_pos)
{   
    if (!(SIZE_Y <= LUDZIK_Y + 2 * BORDER_SIZE))
    {    char static krok_y = 1;  
        if (*y_pos == BORDER_SIZE)
            krok_y = 1;

        if (*y_pos == MAX_POS_Y)
            krok_y = -1;
        
        *y_pos += krok_y;
    }
}

int main( )
{
    char matrix[SIZE_Y][SIZE_X] = {0};
    char x_pos = START_X;
    char y_pos = START_Y;
    while (1)
    {
        create_world((char*)matrix, SIZE_X, SIZE_Y);
        add_man((char*)matrix, SIZE_X, SIZE_Y, x_pos, y_pos);
        print_array_sii((char*)matrix, SIZE_X, SIZE_Y);
        update_x_pos(&x_pos);
        update_y_pos(&y_pos);
        if (1== debug) getchar();
        else Sleep(20);        
    }


    return 0;
}