#include <stdio.h>
typedef enum { 
    F, T
} boolean;
  
int main()
{
    boolean bool1, bool2;
    bool1 = F;
    bool2 = 2;
    system("cls");
    if (bool1 == F) 
        printf("bool1 is false\n");
    else 
        printf("bool1 is true\n");

    if (bool2 == F) 
        printf("bool2 is false\n");
    else 
        printf("bool2 is true\n"); //lekkie klamstwo
        
    if (bool1 == T) 
        printf("bool1 is true\n");
    else 
        printf("bool1 is false\n");

    if (bool2 == T) 
        printf("bool2 is true\n");
    else 
        printf("bool2 is false\n"); //lekkie klamstwo
    // bool2== T/F zawsze false bo 2 != 1 i 2 != 0
    // mimo, że bool2 jest typem boolean(enumem) to nie jest ani true, ani false
    // enum naklada na wartosci: 0 = F, (nie 'F'),
                        //    na 1 = T,
                        //  a na 2+ nie naklada nic

}