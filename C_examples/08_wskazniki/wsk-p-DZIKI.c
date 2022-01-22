#include <stdio.h>
    //kompilator glupieje
int main() { 

    //char tab[4]; //co by bylo jakbym przestawil wskaznik tablicy tab = &zmienna;
    
    unsigned int my_int = -1;

    printf("my_int adr: %p my_int val: %u\n", &my_int, my_int);

    char mask = 0b10101010;
    my_int &= (mask<<0);
    my_int &= (mask<<8);
    my_int &= (mask<<16);
    my_int &= (mask<<24);

    printf("my_int adr: %p my_int val: %u\n\n", &my_int, my_int);

    my_int = -1;
    char* ptr;
    ptr = (char*) &my_int;

    for (int i = 0; i < 4; i++)
    { 
        printf("Adress = %p \n",      ptr+i);
        printf("Value  = %d \n\n",  *(ptr+i));
  
    }
    my_int++;
    //jakies stosy wchodza w gre?
    return 0;
}
 