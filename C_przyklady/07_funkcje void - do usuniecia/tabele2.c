#include <stdio.h>
#include <stdlib.h>

void wypisz(int tab[], size_t size) {
	size_t x = sizeof(*tab);
	size_t y = size / x;
	printf("1szy element to: %d a rozmiar: to %d\n", *tab, size);
	printf("sizeof(size) to: %d, a size/sizeof to: %d\n", x, y);
}


int main(int argc, char const *argv[])
{
	int my_ints10[10] = {1,2,3,4,5,6,7,8,9,0};
	wypisz(my_ints10, sizeof(my_ints10));
	return 0;
}
