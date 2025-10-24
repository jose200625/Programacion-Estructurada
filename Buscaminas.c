#include <stdio.h>

int main() {
    int M[6][6] = {
        {3, 9, 1, 1, 2, 9},
        {2, 9, 4, 1, 2, 1},
        {2, 3, 1, 2, 9, 2},
        {2, 3, 9, 5, 4, 1},
        {3, 2, 1, 3, 9, 2},
        {2, 9, 2, 2, 1, 3}
    };

    int fila = 0;
    int columna = 0;
    int visible[6][6] = {0}; // ocultar las casilas reveladas
    int seguir = 1;          // Control del bucle
    int casilla = 0;         
    int total = 36;          
    int bombas = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (M[i][j] == 9) bombas++;
        }
    }
    total -= bombas;

    printf("Juego de Busca Minas EVITA LAS BOMBAS (9)\n");

    while (seguir) {
        printf("\nTablero actual:\n");
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                if (visible[i][j] == 1)
                    printf(" %d ", M[i][j]);
                else
                    printf(" * ");
            }
            printf("\n");
        }

        // Pedir las coordenadas
        printf("\nSeleccione una casilla fila y columna \n");
        printf("Ingresa la fila: ");
        scanf("%d", &fila);
        printf("Ingresa la columna: ");
        scanf("%d", &columna);

        // comprobar si esta en el rango
        if (fila < 0 || fila > 5 || columna < 0 || columna > 5) {
            printf("Coordenadas fuera del rango, intenta de nuevo.\n");
            continue;
        }

        // comprobar si ya fue revelada o no
        if (visible[fila][columna] == 1) {
            printf("Esa casilla ya fue descubierta.\n");
            continue;
        }

        visible[fila][columna] = 1;

        // si se encuentra una bomba se pierde
        if (M[fila][columna] == 9) {
            printf("\n Has encontrado una bomba. Juego terminado\n");

            // mostrar el tablero completo por ultimo
            printf("\nTablero completo:\n");
            for (int i = 0; i < 6; i++) {
                for (int j = 0; j < 6; j++) {
                    printf(" %d ", M[i][j]);
                }
                printf("\n");
            }
            seguir = 0;
        } else {
            // Casilla segura
            printf("\nEstas a salvo, La casilla (%d, %d) tiene el valor: %d\n", fila, columna, M[fila][columna]);
            casilla++;
        }

        // Verificar si ganó
        if (casilla == total) {
            printf("\nFELICIDADES,Has descubierto todas las casillas seguras.\n");
            printf("\nTablero completo:\n");
            for (int i = 0; i < 6; i++) {
                for (int j = 0; j < 6; j++) {
                    printf(" %d ", M[i][j]);
                }
                printf("\n");
            }
            seguir = 0;
        }
    }

    printf("\n FINAL.\n");
    return 0;
}