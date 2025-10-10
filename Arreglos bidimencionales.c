#include <stdio.h>

int main ()
{
    int a = 0;
    int b[3];
    int c=0;
    int H[3][3]={0,1,2,10,11,12,20,21,22};
    int i;
    int j;
    printf("\n------------->Direcciones de memoria de variables :\n%d\n%d\n%d", &b, &c);

    //arreglo unidimencional

    printf("\n-------->Los valores del arreglo en la posicion 0, 1 y 2 es:\n%d\n%d\n%d", &b[0],&b[1],&b[2]);


//arreglo bidimencionales

        printf("\n------->Arreglo Bidimencional en las cordenadas 2,1 es: \n%d", H[2][1]);

//juego del gato
        printf("\n---->Arreglo Bidimencional completo:\n");
    //for para recorrer en la FILA=I
            for(i=0; i<3; i++){
    // for anidado para recorrer en COLUMNAS=J
                for(j=0; j<3; j++){
                    printf("[%d]\t", H[i][j]);
            }
                        printf("\n");
            }
    return 0;
}
