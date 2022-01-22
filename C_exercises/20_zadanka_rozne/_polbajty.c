#include <stdio.h>
#define OFFSET 4
typedef union {
    unsigned int x;
    unsigned char bajt[4];
} pomiary;
pomiary moje_pomiary;

void polbajt_swap(unsigned char *data_in)
{
    unsigned char bajt = *data_in;

    unsigned char bity_0_3 = bajt & 0b00001111;
    unsigned char bity_3_7 = bajt & 0b11110000;

    unsigned char part1 = bity_0_3 << OFFSET;
    unsigned char part2 = bity_3_7 >> OFFSET;

    unsigned char wynik = 0;

    wynik |= part1;
    wynik |= part2;
    
    *data_in = wynik;
   
}
int main(int argc, char const *argv[])
{
    pomiary nowe;
    
    unsigned char dane = 0x2B;
    char *wsk = &dane;
    unsigned char dane_tab[3] = {0xA1, 0xB2, 0xC3};

    moje_pomiary.x = 0xA1B2C3D4;
    // int *wsk_2 = &moje_pomiary;

    // char bajt1 = *wsk;
    // char *w_bajt1 = &bajt1;
    // char bajt2 = *(wsk+1);
    // char *w_bajt2 = &bajt2;

    printf("M1:\tbajt: %X\n", dane);
    polbajt_swap( wsk );
    printf("M2:\tbajt: %X\n\n", dane);

    printf("\n%X\n\n",moje_pomiary.x);

    printf("M1:\tbajt: %X\n", moje_pomiary.bajt[0]);
    polbajt_swap( &moje_pomiary.bajt[0] );
    printf("M2:\tbajt: %X\n\n", moje_pomiary.bajt[0]);

    printf("M1:\tbajt: %X\n", moje_pomiary.bajt[1]);
    polbajt_swap( &moje_pomiary.bajt[1] );
    printf("M2:\tbajt: %X\n\n", moje_pomiary.bajt[1]);

    printf("M1:\tbajt: %X\n", moje_pomiary.bajt[2]);
    polbajt_swap( &moje_pomiary.bajt[2] );
    printf("M2:\tbajt: %X\n\n", moje_pomiary.bajt[2]);

    printf("M1:\tbajt: %X\n", moje_pomiary.bajt[3]);
    polbajt_swap( &moje_pomiary.bajt[3] );
    printf("M2:\tbajt: %X\n\n", moje_pomiary.bajt[3]);
    
    printf("\n%X\n\n",moje_pomiary.x);
    
    for(int i=0;i<4;i++)
    {
        nowe.bajt[i]=moje_pomiary.bajt[3-i];
    }

    printf("\n%X\n\n",nowe.x);

    printf("M1:\tbajt: %X\n", dane_tab[2]);
    polbajt_swap( &dane_tab[2] );
    printf("M2:\tbajt: %X\n\n", dane_tab[2]);

    return 0;
}
