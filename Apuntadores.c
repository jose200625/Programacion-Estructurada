#include <stdio.h>

void calcularEstadisticas(float v[], int n, float *min, float *max, float *prom) {
    // se inicializa min y max con el primer elemento del arreglo
    if (n > 0) {
        *min = v[0];
        *max = v[0];
    }

    float suma = 0.0;

    // iterarnsobre el arreglo para encontrar min, max y sumar para el promedio.
    for (int i = 0; i < n; i++) {
        float calificacion_actual = v[i];
        suma += calificacion_actual;

        //se organiza *min y *max si se encuentra un nuevo valor
        if (calificacion_actual < *min) {
            *min = calificacion_actual;
        }
        if (calificacion_actual > *max) {
            *max = calificacion_actual;
        }
    }

    // se calcula promedio y guardarlo en *prom
    *prom = suma / n;
}

int main() {
    int n;
    float califs[10];
    float min, max, prom;

    do {
        printf("Cuantas calificaciones (3-10): ");
        if (scanf("%d", &n) != 1) {
            n = 0;
        }
    } while (n < 3 || n > 10);

    // se lee n
    for (int i = 0; i < n; i++) {
        printf("Calificacion %d: ", i + 1);
        scanf("%f", &califs[i]);
    }

    // llamamos a la función se pasa el arreglo, su tamaño, y la direccion
    // de las variables & donde la función guardara los resultados
    calcularEstadisticas(califs, n, &min, &max, &prom);

    printf("\n--- Resultados ---\n");
    printf("Minima: %.2f\n", min);
    printf("Maxima: %.2f\n", max);
    printf("Promedio: %.2f\n", prom);

    return 0;
}
