#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    printf("Escriba la edad:");
    scanf("%d", &edad);

    if (edad >= 18) 
    {
        if (edad >= 65)
        {
            printf("Adulto mayor\n");
        }
        else
        {
            printf("Adulto\n");
        }
    }
    else
    {
        printf("Menor de edad\n");
    }
    
    return 0;
}
