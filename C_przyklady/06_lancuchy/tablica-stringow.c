#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    system("cls");
    char* imiona[3];
    imiona[0] = "Emil";
    imiona[1] = "Rafal";
    imiona[2] = "Kuba";
    for (int i = 0; i < 3; i++)
    {
        printf("%d: %s\n", i, imiona[i]);
    }
    
    return 0;
}
