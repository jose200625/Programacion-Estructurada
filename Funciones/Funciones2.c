#include <stdio.h>

void cuadradoPorValor(int n){
    n = n*n;
    printf("[cuadradoPorValor]n =%d\n", n);
}
void cuadradoPorReferencia (int *n){
    *n=(*n)*(*n);
    printf("[cuadradoPorReferencia]*n = %d\n", *n);
}
int main (){
 int a=3, b=3;
    printf("Antes de cuadradoporValor: a= %d\n", a);
    cuadradoPorValor(a);
    printf("Despues del cuadradoporValor: a =%d\n\n",a);

    printf("Antes del cuadradoporReferencia: b=%d\n",b);
    cuadradoPorReferencia(&b);
    printf("Despues del cuadradoporReferencia: b=%d\n\n", b);

    return 0;
}
/*
#include <stdio.h>
int Funcion (int *A)
{
        printf("TRES %d",*A);
    *A=10;
        printf("CUATRO %d",*A);

    return 0;
}
int main (){

    int A=5;
    printf("UNO %d",A);
    Funcion(&A);
    printf("DOS %d",A);


    return 0;
}
*/
