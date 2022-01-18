# include <stdio.h>

int main()
{
    int tab[10];

    for (int i = 0; i < 10; i++)
    {   
        if (i == 0) tab[i] = 5;
            else tab[i]=tab[i-1]+1;
		
		printf("%d ", tab[i] );
    }
    return 0;
}
