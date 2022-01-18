#include <stdio.h>
#include <stdlib.h>

void write_square(char* square, int square_side, int offset, int number)
{
    square += offset;
    char symbol = number + '0';
    for (int i = 0; i < ( (number * 2) - 1); i++)
    {
        for(int j = 0; j < ( (number * 2) - 1); j++)
        {
            square[j] = symbol;
        }
        square += square_side;
    }
}
void print_square(char* square, int square_side)
{
    for(int i = 0; i < square_side; i++)
    {
        for(int j = 0; j < square_side; j++)
        {
            printf("%c ", square[j]);
        }
        printf("\n");
        square += square_side;
    }
}
int main(void)
{
    int num = 12;  
    int size = (num * 2) - 1;
    int offset = 0;
    char * tab = (char *) malloc (size * size * sizeof(char));
    for(int i = num; i >= 1; i--)
    {
        write_square((char *)tab, size, offset, i);
        offset += size + 1;
    }
    print_square((char *)tab, size);
    free(tab);
    return 0;
}