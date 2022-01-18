#include <stdio.h>
#include <stdlib.h>
#include <my_lib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char const *argv[])
{   
    system("cls");
    my_lib_test();
    //chose int or float with comments
    //int fahr, celsius;
    float fahr, celsius;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)    
        //remove comment from one example of printf (Int/Float)
        //printf("%d\t%d \n", fahr, 5 * (fahr-32) / 9);
        //printf("%3d\t%6d \n", fahr, 5 * (fahr-32) / 9);
        printf("%3.0f %6.1f \n", fahr, (5.0/9.0)*(fahr-32));
    my_exit();

}
