#include <stdio.h>
#include <stdlib.h>
typedef struct struktura_czlowieka
{
    int wiek;
    char plec; // k/m
    
} czlowiek;

czlowiek new_czlowiek(int w, char p) {
    czlowiek temp;
        temp.wiek = w;
        temp.plec = p;
    return temp;
}

int postarzanie(czlowiek cz, int lata) {
    cz.wiek += lata;
    return cz.wiek;
}

czlowiek zamien_w_nastolatke(czlowiek cz){
    cz.wiek = 19; cz.plec = 'k';
    return cz;
}

void zamien_w_nastolatke_przez_ref(czlowiek *cz){
    cz->wiek = 19; cz->plec = 'k';
}
void say_hello(czlowiek cz) {
    printf("Czesc mam %d lat i jestem plci %c.\n",cz.wiek, cz.plec);
}

//zmienne globalne
czlowiek *wsk_czlwk; //wskaznik na typ czlowiek

int main(int argc, char const *argv[])
{
    system("cls");
    czlowiek ja = new_czlowiek(29, 'm');
    czlowiek babcia = new_czlowiek(60, 'k');
    czlowiek dziadek = new_czlowiek(62, 'm');

    printf("\nja\n");
    say_hello(ja); ja.wiek = postarzanie(ja, 5); say_hello(ja);
    
    printf("\ndziadek\n");
    //say_hello(dziadek); dziadek = zamien_w_nastolatke(dziadek); say_hello(dziadek);
    wsk_czlwk = &dziadek; zamien_w_nastolatke_przez_ref(wsk_czlwk); say_hello(dziadek);
    
    printf("\nbabcia\n");
    say_hello(babcia); babcia.wiek = 5; say_hello(babcia);
    
    return 0;
}
