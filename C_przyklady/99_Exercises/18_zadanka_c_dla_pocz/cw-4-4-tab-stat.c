#include <stdio.h>

void Wypisz(int *tab, int ndanych)
{
	for (int i = 0; i < ndanych; i++)
    {
		printf("%d ", *(tab+i));
    };
    
	printf("\n");
};

int Wypelnij(int *tab, int rozmiar, int ndanych)
{
	if (ndanych > rozmiar) return 1;

	int pierwszyElement = 100;
	tab[0] = pierwszyElement;

	for (int i = 1; i < ndanych ; i++)
	{	
		tab[i] = tab[i-1]+1;
	};
	return 0;
}

int Wczytaj(int *tab, int rozmiar, int ndanych)
{
	if (ndanych > rozmiar) return 1;

	for (int i = 0; i < ndanych ; i++)
	{	
		tab[i] = getchar()+'0';
		getchar();
	};
}

int czyPodzielnePrzezPiec()
{
	
}

int main()
{
	int tabSize = 5;
	int mojaTablica[tabSize];

	printf("wprowadz ile danych chcesz wprowadzic \n");
	int ileElementow = getchar()-'0';
    getchar();

    printf("\nStart wczytaj\n");
	Wczytaj(mojaTablica, tabSize, ileElementow);

    printf("\nStart wypisz\n");
    Wypisz(mojaTablica, ileElementow);

	getchar();
    return 0;
}
