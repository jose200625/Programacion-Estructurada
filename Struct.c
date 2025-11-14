#include <stdio.h>
#include <string.h>

struct Alumno {
    char nombre[20];
    float c1, c2, c3;
};


// calcula el promedio de un solo alumno
float promedio(struct Alumno a) {
    return (a.c1 + a.c2 + a.c3) / 3.0f;
}

// se encuntra y devuelve la estructura del alumno con el mejor promedio
struct Alumno mejor(struct Alumno a[], int n) {
    int pos = 0; // Asumimos que el primer alumno es el mejor inicialmente
    for (int i = 1; i < n; i++) {
        // compara el promedio del alumno actual (a[i]) con el del mejor encontrado hasta ahora (a[pos])
        if (promedio(a[i]) > promedio(a[pos])) {
             pos= i;
        }
    }
    return a[pos]; // devuelve la estructura completa del mejor alumno
}

void capturar(struct Alumno a[], int n) {
    printf("\n--- Captura de Datos de Alumnos ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nDatos del Alumno %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", a[i].nombre);
        printf("Calificacion 1: ");
        scanf("%f", &a[i].c1);
        printf("Calificacion 2: ");
        scanf("%f", &a[i].c2);
        printf("Calificacion 3: ");
        scanf("%f", &a[i].c3);
    }
}

void mostrar(struct Alumno a[], int n) {
    printf("\n--- Registros Completos ---\n");
    printf("%s %s %s %s %s\n", "NOMBRE", "Calificacion1", "Calificacion2", "Calificacion3", "PROMEDIO.");
    printf("-----------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%s %.2f %.2f %.2f %.2f\n",
               a[i].nombre, a[i].c1, a[i].c2, a[i].c3, promedio(a[i]));
    }
}

int main() {
    const int N_ALUMNOS = 3;
    struct Alumno grupo[N_ALUMNOS];

    capturar(grupo, N_ALUMNOS);

    mostrar(grupo, N_ALUMNOS);

    struct Alumno top = mejor(grupo, N_ALUMNOS);

    printf("\n-----------------------------------------------------------------\n");
    printf("Alumno con mejor promedio: %s (Promedio: %.2f)\n",
           top.nombre, promedio(top));
    printf("-------------------------------------------------------------\n");

    return 0;
}
