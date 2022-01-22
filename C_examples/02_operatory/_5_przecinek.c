#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
	int a = 3; 
	int b = 4; 
	int c = 5; // a^2 + b^2 = c^2
	printf("przecinek\n\n");
	printf("przed operacja ,\na = %d, b = %d, c = %d\n", a, b, c);

	int x = (a < b ? a++ : b++, c++, 5);
	
	printf("\nx = ( a < b ? a++ : b++, c++ ), x wyniesie: %d\n\n", x);

	printf("po operacji ,\na = %d, b = %d, c = %d\n\n", a, b, c);
}