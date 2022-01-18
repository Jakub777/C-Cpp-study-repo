#include <stdio.h>
#include <math.h>
struct _zespolona
{
    float Re;
    float Im;
};
typedef struct _zespolona typ_zespolony;

void print_zespolona(typ_zespolony liczba);
float modul_zespolony(typ_zespolony liczba);
float czesc_re(typ_zespolony liczba);
float czesc_im(typ_zespolony liczba);
typ_zespolony dodaj_zesp(typ_zespolony liczba_a, typ_zespolony liczba_b);
typ_zespolony odejmij_zesp(typ_zespolony liczba_a, typ_zespolony liczba_b);
typ_zespolony pomnoz_zesp(typ_zespolony liczba_a, typ_zespolony liczba_b);

int main(int argc, char const *argv[])
{
    typ_zespolony moja_liczba =  {5, -2};
    typ_zespolony moja_liczba2 = {2,  2};
    print_zespolona(moja_liczba);
    print_zespolona(moja_liczba2);

    float modul2 = modul_zespolony(moja_liczba2);
    printf("modul: %f\n", modul2);

    typ_zespolony moja_liczba3 = dodaj_zesp(moja_liczba, moja_liczba2);
    printf("wynik dodawania: ");
    print_zespolona(moja_liczba3);

    typ_zespolony moja_liczba4 = odejmij_zesp(moja_liczba, moja_liczba2);
    printf("wynik odejmowania: ");
    print_zespolona(moja_liczba4);

    typ_zespolony moja_liczba5 = pomnoz_zesp(moja_liczba, moja_liczba2);
    printf("wynik mnożeniaaaa: ");
    print_zespolona(moja_liczba5);
    
    
    return 0;
}

void print_zespolona(typ_zespolony liczba)
{
    if (liczba.Im < 0) printf("%1.1f - j%1.1f\n", liczba.Re, -1*liczba.Im);
    else printf("%1.1f + j%1.1f\n", liczba.Re, liczba.Im);
}
float modul_zespolony(typ_zespolony liczba)
{
    return sqrt(liczba.Re*liczba.Re + liczba.Im*liczba.Im);
}
float czesc_re(typ_zespolony liczba)
{
    return liczba.Re;
}
float czesc_im(typ_zespolony liczba)
{
    return liczba.Im;
}
typ_zespolony dodaj_zesp(typ_zespolony liczba_a, typ_zespolony liczba_b)
{
    typ_zespolony liczba_c = {0, 0};
    liczba_c.Re = liczba_a.Re + liczba_b.Re;
    liczba_c.Im = liczba_a.Im + liczba_b.Im;
    return liczba_c;
}
typ_zespolony odejmij_zesp(typ_zespolony liczba_a, typ_zespolony liczba_b)
{    
    return (typ_zespolony){liczba_a.Re - liczba_b.Re, liczba_a.Im - liczba_b.Im};
    
    // typ_zespolony liczba_c = {
        // liczba_a.Re - liczba_b.Re,
        // liczba_a.Im - liczba_b.Im
    // };
    // return liczba_c;
}
typ_zespolony pomnoz_zesp(typ_zespolony liczba_a, typ_zespolony liczba_b)
{
    typ_zespolony liczba_c = {
        liczba_a.Re * liczba_b.Re - liczba_a.Im * liczba_b.Im,
        liczba_a.Re * liczba_b.Im + liczba_a.Im * liczba_b.Re
    };
    return liczba_c;
}
