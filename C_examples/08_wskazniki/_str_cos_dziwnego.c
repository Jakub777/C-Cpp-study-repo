#include <stdio.h>
#include <string.h>
#define S_SIZE 5

typedef struct struktura_slowa {
    char *znak;
    char text[24];
    int  cyfr;
} slowa;
slowa slowamoje[S_SIZE] = {
    {"asd1", "asd2", 1},
    {"asd3", "asd4", 2}, 
    {"asd5", "asd6", 3}, 
    {"asd7", "asd8", 4}, 
    {"asd9", "asd0", 5}
};        
//slowa slowamoje[S_SIZE];     

void print_slowamoje_z_podzialem_na_pola(){
    printf("TABELA ZNAK + TEXT:\n"); 
    for (int i = 0; i < S_SIZE; i++)
      {
        printf("i: %d, adres: 0x%12p, slowo: \"%s\"\t\t (znak)\n",    i, &slowamoje[i].znak, slowamoje[i].znak);
        printf("i: %d, adres: 0x%12p, slowo: \"%s\"\t\t (text)\n",     i,  slowamoje[i].text, slowamoje[i].text);
        printf("i: %d, adres: 0x%12p, cyfra: \"%d\" \t\t (cyfr)\n\n", i, &slowamoje[i].cyfr, slowamoje[i].cyfr);
    }; 
}

void print_slowamoje(){
    printf("TABELA SLOWAMOJE\n");
    for (int i = 0; i < S_SIZE; i++)
    {
        printf("i: %d, adres: 0x%12p\n", i, &slowamoje[i]);
    }; printf("\n");
}


int main(int argc, char const *argv[])
{
    printf("TABELA PODSTAWOWA:\n");
  //printf("size of slowa[0]: %d\n",          strlen(slowamoje[0].znak)) ;
    printf("size of slowa[0]: %d (x %d =)\n", sizeof(slowamoje[0]), S_SIZE );
    printf("Size of slowamoje: %d\n\n",       sizeof(slowamoje) );

    slowamoje[3].znak = "dupa1";
    *(slowamoje[3].text) = ' ';

    print_slowamoje_z_podzialem_na_pola();
    print_slowamoje();    

    printf("TABELA EKSPERYMENTALNA\n");
    int i=0;
    printf("i: %d, adres: 0x%12p\n", i, &slowamoje[i]);
    printf("i: %d, adres: 0x%12p\n", i,  slowamoje[i]);
    printf("i: %d, adres: 0x%12p\n", i, &slowamoje[i].znak);
    printf("i: %d, adres: 0x%12p\n", i,  slowamoje[i].znak);printf("\n");

    printf("ZABAWA WSKAZNIKAMI\n");
    slowa *wsk_na_slowamoje = &slowamoje;
    //(wsk_na_slowamoje+2)->znak = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("adr: %12p\n", (wsk_na_slowamoje+i));
    }    
    return 0;
}
