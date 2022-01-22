#include <stdio.h>
#include <stdlib.h>
#include <my_lib.h>

int main(int argc, char const *argv[])
{	
	system("cls");
	printf("start\n");
	char c = '0';

	while ((c = getchar()) != EOF)
	{	
		// ctrl + z = eof
		putchar(c);
	}
	printf("koniec\n");
}

// znak eof z klawiatury to ctrl+z i enter
// a na linuxie ctrl+d (w terminalu ofc)