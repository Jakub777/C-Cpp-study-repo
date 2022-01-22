#include <stdio.h>
void print_1d(char *tab)
{   
    printf("\nprint_1d:\n");
    for (int i = 0 ; i < 3; i++)
    {
        printf("%c ", *(tab+i));
        printf("%p ",  (tab+i));
        printf("\n");
    }    
}
void print_2d(char *tab) 
{
    printf("\nprint_2d:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", *(tab+i*3+j) );
            printf("%p ",  (tab+i*3+j) );
        }
        printf("\n");
        
    }
    
}

int main(int argc, char const *argv[])
{   
    char matrix_1d_v1[3] = {'1','2','3'};

    char matrix_1d_v2[1][3] = {
        {'7','8','9'}  
    };

    char matrix_2d[3][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}        
    };
     
    print_1d((char*)matrix_1d_v2);
    print_2d((char*)matrix_2d);
    printf("\n");
    

    printf("print z reki: %p\n",  *badany_wskaznik);
    printf("print z reki: %p\n",  &badany_wskaznik);
    printf("print z reki: %p\n",   badany_wskaznik);
    printf("print z reki: %c\n",  *badany_wskaznik);
    
    // printf("print z reki: %c\n",  **(matrix_2d+1));
    // printf("print z reki: %p\n",   **(matrix_2d+1));
    // printf("print z reki: %p\n",   **(matrix_2d+1));
    return 0;
}
