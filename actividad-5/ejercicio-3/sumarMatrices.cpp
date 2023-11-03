#include <stdio.h>

// Función para calcular la suma de dos matrices
void sumarMatrices(int matrizA[][100], int matrizB[][100], int resultado[][100], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}