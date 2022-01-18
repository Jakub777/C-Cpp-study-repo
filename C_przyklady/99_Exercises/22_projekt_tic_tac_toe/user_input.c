#include <stdio.h>

//dopisac switch case do check if valid na rozne literki

int check_if_go_back_is_valid(char * dane, int etap_gry)
{
    int valid = 0;
    int war1 = ((dane[0] == 'C') || (dane[0] == 'c')) ? 1 : 0;
    int war2 = ((dane[1] >= '0') && (dane[1] <= ((char)etap_gry + '0'))) ? 1 : 0;
    if (war1 && war2) {
        valid = 1;
        //sprawdzenie
        printf("INPUT: dane sa prawidlowe \n");
    };
    //sprawdzenie
    if (valid == 0 )
        printf("INPUT: dane sa nieprawidlowe\n");
    return valid;
}

int check_if_move_is_valid(char * dane)
{
    int valid = 0;
    
    int war1 = ((dane[0] == 'R') || (dane[0] == 'r')) ? 1 : 0;
    int war2 = ((dane[1] >= '1') && (dane[1] <= '3')) ? 1 : 0;
    int war3 = ((dane[2] >= '1') && (dane[2] <= '3')) ? 1 : 0;
    
    //sprawdzenie
    // if (war1) printf("war 1 true\n");
    // if (war2) printf("war 2 true\n");
    // if (war3) printf("war 3 true\n");
    //printf("%d %d %d\n", dane[0], dane[1], dane[2]);
    //printf("%c %c %c\n", dane[0], dane[1], dane[2]);
    
    if (war1 && war2 && war3) {
        valid = 1;
        //sprawdzenie
        printf("INPUT: dane sa prawidlowe \n");
    };
    //sprawdzenie
    if (valid == 0 )
        printf("INPUT: dane sa nieprawidlowe\n");
    return valid;
}

void get_user_input(char * dane, int etap_gry)
{
    //nadpisz poprzednie dane
    dane[0] = 'a'; dane[1] = 'a'; dane[2] = 'a';

    //pobierz znak do dane[0]
    dane[0] = getchar();
    if (dane[0] == 10) dane[0] = getchar();
    
    //jesli dane[0] to 'r' to rozpocznij procedure ruchu
    if (dane[0] == 'R' || dane[0] == 'r')    
        {
            printf("Wybrales Ruch.\n");
            printf("Wprowadz nr wiersza: ");
            dane[1] = getchar();
            if (dane[1] == 10)
                dane[1] = getchar();
    
            printf("Wprowadz nr kolumny: ");
            dane[2] = getchar();
            if (dane[2] == 10)
                dane[2] = getchar();

            //jesli dane ok zakoncz pobieranie danych
            if (check_if_move_is_valid(dane) == 1) 
                return;
        }
    //jesli dane[0] to 'c' to rozpocznij procedure cofania
    if (dane[0] == 'C' || dane[0] == 'c')    
    {
        printf("Wybrales cofanie.\n");
        printf("Wprowadz cyfre ruchu, do ktorego chcesz wrocic: ");
        dane[1] = getchar();
        if (dane[1] == 10)
            dane[1] = getchar();

        //jesli dane ok zakoncz pobieranie danych
        if (check_if_go_back_is_valid(dane, etap_gry) == 1) 
            return;
    }

    //sprawdzenie
    printf("\nUSER THINGS, x: %c; y: %c;\n\n", dane[1], dane[2]);
    //jesli tutaj doszedlem to dane nie byly prawidolwe, sproboj pobrac jeszcze raz
    get_user_input(dane, etap_gry);
}