#include <stdio.h>

// Función para llenar una matriz
void llenarMatriz(int matriz[][100], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor en la posición (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
