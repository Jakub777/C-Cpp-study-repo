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

int main()
{
	int tabSize = 10;
	int mojaTablica[tabSize];
	int ileElementow = 8;

	Wypelnij(mojaTablica, tabSize, ileElementow);
    Wypisz(mojaTablica, ileElementow);
	Wczytaj(mojaTablica, tabSize, ileElementow);
    Wypisz(mojaTablica, ileElementow);

	getchar();
    return 0;
}
