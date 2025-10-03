#include <stdio.h>

int main ()
{
    int i;
    int op;
    int a [6]={1,2,0,0,3,2};
    float suma =0;
    float promedio;
    int modificar;
    int x;
  do{
    printf("\nMenu de Opciones:\n");
    printf("1) Mostrar Marcador de goles de los ultimos 6 partidos\n");
    printf("2) Calcular Promedio de goles por partido\n");
    printf("3) Ver resultado de un partido en especifico\n");
    printf("4) Modificar todos los resultados\n");
    printf("5) Modificar un resultado\n");
    printf("6) Salir\n");
    scanf("%d", &op);

    switch(op)
    {
        case 1:
            printf("\n-----1)Marcador de goles de los ultimos 6 partidos de las chivas------\n");
            for(i=0; i <= 5; i++ )
            {
                printf("El marcador del juego %d es: %d\n", i+1, a[i]);
            }
            break;

        case 2:
            printf("\n-----2)Calcular Promedio de goles por partido------\n");
            for(i=0; i <= 5; i++ )
            {
                suma = suma+a[i];
            }
            promedio = suma/6;
            printf("\nEl promedio de goles por partido es: %f\n", promedio);
            break;

        case 3:
            printf("\n-----3)Ver resultado de un partido en especifico------\n");
            printf("Ingrese el numero de el marcador que quieres ver:\n");
            scanf("%d", &i);

                printf("El marcador del partido %d es: %d\n", i, a[i-1]);

            break;

        case 4:
            printf("\n-----4)Modificar todos los resultados------\n");
            for(i=0; i <= 5; i++ )
            {
                printf("Ingrese el nuevo marcador para el partido %d: ", i+1);
                scanf("%d", &a[i]);
            }
                printf("\nLos nuevos valores del marcador son:\n");
            for(i=0; i <= 5; i++ )
            {
                printf("El marcador del juego %d es: %d\n", i+1, a[i]);
            }            break;

        case 5:
            printf("\n-----5)Modificar un resultado------\n");
            printf("Ingrese el numero del partido a modificar :\n");
            scanf("%d", &modificar);


                printf("Ingrese el nuevo marcador para el partido %d: ", modificar);
                scanf("%d", &x);
                a[modificar-1] = modificar;
                printf("Resultado del partido %d modificado a %d.\n", modificar, x);

            break;

        case 6:
            printf("\nSalir.\n");
            break;

        default:
            printf("\nOpcion invalida.\n");
            break;
    }
  } while (op != 6);
    return 0;
}
