#include <stdio.h>
#include <stdlib.h>
int dlugosc_slowa(char *_wsk)
{
    int i = 0;
    
    while (*(_wsk+i) != 0)
    {
        i++;
    }
    puts(i);
    return i;
}
// void wyp_slowo(char *_wsk)
// {
//     printf("%s\n",_wsk);
// }
// void wyp_slowo_z_adresami(char *wsk_na_slowo, int size)
// {
//     // printf("%p - %p - %p\n", &wsk_na_slowo, wsk_na_slowo, *wsk_na_slowo);
//     // printf("%s\n", wsk_na_slowo);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%p %s -> %d = %c\n", (wsk_na_slowo+i), (wsk_na_slowo+i), (*wsk_na_slowo+i), (*wsk_na_slowo+i));
//     }    
// }
// void swap_size(char *wsk_na_slowo, int size)
// {
//     for (int i = 0; i < size; i++)
//     {   
//         printf("%d  ", (*wsk_na_slowo+i));
//         if ((*wsk_na_slowo+i) % 32 > 2)
//         {
//             //3cia cwiartka
//             printf("m");
//         }
//         else
//         {
//             //4ta cwiartka
//             printf("D");
//         }
//     };
//     printf("\n");
// }

int main(int argc, char const *argv[])
{
    system("cls");
    char slowo_a = "KurdeFaja";
    char *wsk_na_slowo_a = slowo_a;
    
    int x = dlugosc_slowa(slowo_a);
    // wyp_slowo(slowo_a);
    // swap_size(slowo_a, x);
    
    
    // wyp_slowo_z_adresami(slowo_a, x);
    // return 0;
}


 // '5'-'0' = 5