#include <stdio.h>
float areaRectangulo (float base, float altura){
        return  base*altura;

}
float areaCuadrado (float lado){
        return  lado*lado;

}
float areaTriangulo (float base, float altura){
        return  (base*altura)/2;

}
int main (){
    int opcion;
    float base, altura, lado, area;

do
{

    printf("===CALCULO DE AREA===\n");
    printf("1.Area de un rectangulo\n");
    printf("2.Area de un cauadrado\n");
    printf("3. Area de un triangulo\n");
    printf("4.Salir\n");
    printf("Seleccione una opcion:");
    scanf("%d", &opcion);

    switch(opcion){
    case 1:
        printf("\n----Area de un rectangulo----\n");
        printf("Ingrese base y altura");
        scanf("%f %f", &base, &altura);
        area = areaRectangulo(base, altura);
        printf("El area del rectangulo es:%.2f\n", area );
        break;

    case 2:
        printf("\n----Area de un Cuadrado-----\n");
        printf("Ingrese el lado:");
        scanf("%f", &lado);
        area= areaCuadrado(lado);
        printf("El area del cuadrado es:  %.2f\n", area);
        break;

    case 3:
        printf("\n--El area de un Triangulo---\n");
        printf("Ingrese base y altura:");
        scanf("%f %f", &base, &altura);
        area=areaTriangulo(base,altura);
        printf("El area de un triangulo es %.2f\n", area);
        break;

    case 4:
        printf("\n Salida del programa\n");
        break;

    default:
        printf("\nOpcion no valida, Intente de nuevo.\n");
    }

}
while (opcion !=4);

    return 0;
}
