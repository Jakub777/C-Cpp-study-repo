#include <stdio.h>
#include <stdlib.h>

typedef void (*my_cb_t) (int);

void my_func(int how_many_times) {
    for (int i = 0; i < how_many_times; i++) {
    printf("Func: I was called for the %dth time\n", i+1);
    }
}

int main(int argc, char const *argv[])
{
    system("cls");
    printf("Main: start\n");
    // callback is a pointer to a funcion (?)
    // definition of callback
    my_cb_t my_callback = {0};
    // init of callback
    my_callback = my_func;
    // executing a callback (?)
    my_callback(10);
    return 0;
}
