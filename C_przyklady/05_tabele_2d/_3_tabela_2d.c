#include <stdio.h>
#define IL_PIETER 5
#define IL_MIESZKAN 3
    
int main()
{
    //tabela 3 x 5 = 15
    char* nazwisko_rodziny_pod_lokalem[IL_PIETER][IL_MIESZKAN] = {
        {"Kowalscy","Nowakowscy","Psikuta"},
        {"","",""},
        {"","",""},
        {"","",""},
        {"","",""}
    };

    nazwisko_rodziny_pod_lokalem[1][2] = "Psikuta bez s";
    nazwisko_rodziny_pod_lokalem[0][8] = "dupa";

    for (int PIETRO = 0; PIETRO < IL_PIETER; PIETRO++)
    {
        for (int MIESZKANIE = 0; MIESZKANIE < IL_MIESZKAN; MIESZKANIE++)
        {
            char znak_konca_linii = '|';
            if (MIESZKANIE == IL_MIESZKAN-1) znak_konca_linii = ' ';
            printf("%s %c ", nazwisko_rodziny_pod_lokalem[PIETRO][MIESZKANIE], znak_konca_linii);
        }
        puts(" ");
        
    }
    
}