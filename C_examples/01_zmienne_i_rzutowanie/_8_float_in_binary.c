#include <stdio.h>
#include "my_lib.h"
#include <stdlib.h>

int main()
{
    system("cls");
	// float f_1 = 5;
	// float f_2 = 0b01111111100000111111111111111111;
	// float f_3 = 0b01111111100000111111111111111111;
	// float f_4 = 0b01111111100000000000111111111111;
	// float f_5 = 0b00011111100000111111111111111111;
	// printf("%E\n",f_1);
	// printf("%E\n",f_2);
	// printf("%E\n",f_3);
	// printf("%E\n",f_4);
	// printf("%E\n",f_5);

	float pi_1 = 3.14f;
	float pi_2 = pi_1 * 2;
//	pi_1 = 1.01E1f;
//	pi_2 = 0.99E1f;
	//float dzielnik = 0.33;
	//pi_1 /= dzielnik;
	//pi_2 /= dzielnik;
	float wynik = pi_1 * 4;
	float f1 = 1.0f;

	printf("%+f\n", pi_1);  print_bits(sizeof(pi_1),  &pi_1);
	printf("%+E\n", pi_2);  print_bits(sizeof(pi_2),  &pi_2);
	printf("%+f\n", wynik); print_bits(sizeof(wynik), &wynik);
	printf("%+f\n", f1);    print_bits(sizeof(f1),    &f1);
	
	float error_test = 100;
	float error_test2 = 1.2;
	for (int i = 0; i < 100; i++)
	{
		error_test *= error_test2;
		printf("%+f\n", error_test);
	}
	

	return 0;
}
