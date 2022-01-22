#include "my_lib.h"
#include <stdio.h>
#include <stddef.h>
void my_lib_test ()
{
	printf("TEST !!!\n");
}

int my_exit (void)
{
    printf("\nwcisnij ENT, aby zakonczyc\n");
	char user_input = 'X';
    while (1)
	{	
        scanf("%c", &user_input);
        if (user_input == 10)
            return 0;
        else
            printf("to nie byl enter, kod ascii (dec) znaku (%c) to: %d\n", user_input, user_input);
	}
    return -1;
}

void print_array(void * ptr, size_t rozmiar, int n_data, char flag)
{
    if ((int)rozmiar > n_data)
    {
        printf("Chcesz wydrukowac za duzo elementow\n");
        return;
    }
    switch (flag)
    {
    case 'f':
        printf("\nFLOAT ARRAY:\n");
        for (int i = 0; i < n_data; i++)
        {
            printf("ADR: %p VAL: %f\n", ( (float *) ptr + i), * ( (float *) ptr + i ) );
        }
        break;
    case 'i':
        printf("\nINTEGER ARRAY:\n");
        for (int i = 0; i < n_data; i++)
        {
            printf("ADR: %p VAL: %d\n", ( (int *) ptr + i), * ( (int *) ptr + i ) );
        }
        break;
    case 'c':
        printf("\nCHAR ARRAY:\n");
        for (int i = 0; i < n_data; i++)
        {
            printf("ADR: %p VAL: %c\n", ( (char *) ptr + i), * ( (char *) ptr + i ) );
        }
        break;
    case 'd':
        printf("\nDOUBLE ARRAY:\n");
        for (int i = 0; i < n_data; i++)
        {
            printf("ADR: %p VAL: %lf\n", ( (double *) ptr + i), * ( (double *) ptr + i ) );
        }
        break;
    }  
}
// (sizeof(a), &a)
void print_bits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;
    printf("Msb ");
    for (i = size-1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
		printf(" ");
    }
    puts("Lsb ");
}