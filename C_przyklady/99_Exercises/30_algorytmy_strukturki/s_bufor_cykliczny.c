#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define BUFF_SIZE 10

typedef struct _my_buff {
    char* head;
    char* tail;
    char buff_data[BUFF_SIZE];
} my_buff_t;

//funkcja do rysowania pozycji H i T
void print_ptr_pos(char* ptr, char* ptr_ref_point, char symbol)
{
    unsigned char offset = (char)(ptr - ptr_ref_point);
    while (offset > 0) {
        //4 spacje
        printf("    ");
        offset--;
    };
    //3 spacje
    printf("   %c\n", symbol);
}

void increment_head(my_buff_t* _bufor)
{
    char* lowest = _bufor->buff_data;
    char* highest = _bufor->buff_data + BUFF_SIZE-1;
    if (_bufor->head == highest)
        _bufor->head = lowest;
    else
        _bufor->head += 1;
}

void add_data(my_buff_t* _bufor, char data)
{
    *(_bufor->head) = data;
    increment_head(_bufor);
}

void increment_tail(my_buff_t* _bufor)
{
    char* lowest = _bufor->buff_data;
    char* highest = _bufor->buff_data + BUFF_SIZE-1;
    if (_bufor->tail == highest)
        _bufor->tail = lowest;
    else
        _bufor->tail += 1;
}

char remove_data(my_buff_t* _bufor)
{
    char data = *(_bufor->tail);
    increment_tail(_bufor);
    return data;
}

int main(int argc, char const *argv[])
{
    my_buff_t buforek;
    buforek.head = buforek.buff_data;
    buforek.tail = buforek.buff_data;
    for (int i = 0; i < BUFF_SIZE; i++) {
        buforek.buff_data[i] = '_';
    }
    char some_size = sizeof(buforek);
    char user_input = '0';
    char data = '_';
    printf("przeczytaj warningi\n\n");
    getchar();
    while(1) {
        system("cls");
        printf("buffor size: %d\n", some_size);
        printf("buffor appearance:\n");
            print_ptr_pos(buforek.head, buforek.buff_data, 'H');
            printf(" [ %c ", buforek.buff_data[0]);
            for (int i = 0 + 1; i < BUFF_SIZE - 1; i++) {
                printf("| %c ", buforek.buff_data[i]);
            }
            printf("| %c ]\n", buforek.buff_data[BUFF_SIZE-1]);
            print_ptr_pos(buforek.tail, buforek.buff_data, 'T');
        printf("what u want to do: \n1 - write\n2 - read\n");
        printf("last data was: %c\n", data);
        printf("last input was: %c\n\n", user_input);
        printf("your input: ");
        scanf("%c", &user_input);
            if (user_input == 10) scanf("%c", &user_input);

        if('1' == user_input){
            data = rand() % 25 + 65;
            add_data(&buforek, data);
            }
        if('2' == user_input){
            data = remove_data(&buforek);
        }
                
    };


    return 0;
}
