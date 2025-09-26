#include <stdio.h>
#include <stdlib.h>

int main()
{

int op, x;
printf("------Estructura de control switch anidado. Opciones para el ejemplo 1.Numero positivo o negativo 2.Numero par o impar------\n");
    printf("Escriba un numero:");
    scanf("%d", &x);
    printf("Escribe una opcion:");
    scanf("%d", &op);

    switch(op)
    {
    case 1:
        if(x > 0)
            printf("Positivo");
        else
            printf("No positivo");
        break;
        case 2:
        if(x % 2==0)
        printf ("El numero es par\n");
    else
        printf("El numero es impar \n");
        break;
        default:
            printf("No se eligio nada");
        break;
    }
    return 0;
}
