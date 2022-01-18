#include <stdio.h>
#include <stdlib.h>

char* create_dyn_table(int);
void  write_data_to_table(char*, int);
void  print_table(char*, int);
void  write_zero_to_single_cell(char*, int, int);

int main(int argc, char const *argv[])
{
    int size = 10;
    int x_pos = 4;
    char* my_table = create_dyn_table(size);
    write_data_to_table(my_table, size);
    write_zero_to_single_cell(my_table, size, x_pos);
    print_table(my_table, size);
    free(my_table);
    return 0;
}
void write_zero_to_single_cell(char* _tab, int _size, int x_pos)
{
    if (x_pos > _size) {
        printf("\n wybrales pozycja poza tablica");
        return;
    }
    _tab += x_pos;
    *_tab = '0';
}
void print_table(char* _tab, int _size)
{
    for (int i = 0; i < _size; i++)
    {
        printf("%c ", _tab[i]);
    }
}
void write_data_to_table(char* _tab, int _size)
{
    for (int i = 0; i < _size; i++)
    {
        _tab[i] = i + 'a';
    }
}
char* create_dyn_table(int _size)
{
    char* temp;
    temp = (char*) malloc(_size * sizeof(char));
    return temp;
}