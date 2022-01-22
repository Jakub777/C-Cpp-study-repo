#include <stdio.h>
typedef struct _struktura_czlowieka {
    int wiek;
    //char plec ma padding do 4
    char plec; // (K/M)
} czlowiek;
typedef struct _struktura_czlowieka_dwa {
    int wiek;
    char plec; // (K/M)
    char czy_ma_18_lat; // (T/N)    
} czlowiek_dwa;
typedef struct _struktura_czlowieka_trzy {
    int wiek;
    char plec; // (K/M)
    char czy_ma_18_lat; // (T/N)
    char *imie;
} czlowiek_trzy;
typedef struct _struktura_czlowieka_z_imieniem {
    char imie[4];
} czlowiek_z_imieniem; //20+1

int main(int argc, char const *argv[])
{
    czlowiek ja = {5, 'M'};
    printf("Ja: %d\n\n", ja.wiek);

    czlowiek babcia;
    babcia.wiek = 60;
    babcia.plec = 'K';
    printf("Babcia: %d %c\n\n", babcia.wiek, babcia.plec);
    
    czlowiek babcia2 = babcia;
    babcia2.wiek++;
    printf("Babcia2: %d %c\n\n", babcia2.wiek, babcia2.plec);

    czlowiek dziadek;
    printf("Dziadek: %d %d\n\n", dziadek.wiek, dziadek.plec);

    int size_of_czlowiek = sizeof(czlowiek); printf ("Size of czlowiek1: %d\n", size_of_czlowiek);
    int size_of_czlowiek_dwa = sizeof(czlowiek_dwa); printf ("Size of czlowiek2: %d\n", size_of_czlowiek_dwa);
    int size_of_czlowiek_trzy = sizeof(czlowiek_trzy); printf ("Size of czlowiek3: %d\n", size_of_czlowiek_trzy);
    int size_of_czlowiek_z_imieniem = sizeof(czlowiek_z_imieniem); printf ("Size of czlowiek+imie: %d\n", size_of_czlowiek_z_imieniem);

    return 0;
}