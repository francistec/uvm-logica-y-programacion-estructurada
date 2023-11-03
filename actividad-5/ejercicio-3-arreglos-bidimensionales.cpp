#include <stdio.h>
#include <windows.h>
#include "ejercicio-3/llenarMatriz.cpp"
#include "ejercicio-3/sumarMatrices.cpp"
#include "ejercicio-3/mostrarMatriz.cpp"

int main() {
    SetConsoleOutputCP(65001);
    int filas, columnas;

    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);

    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    int matrizA[100][100];
    int matrizB[100][100];
    int resultado[100][100];

    if (filas <= 0 || columnas <= 0) {
        printf("El número de filas y columnas debe ser mayor que cero.\n");
        return 1;  // Terminar el programa con un código de error
    }

    printf("Llenar la primera matriz:\n");
    llenarMatriz(matrizA, filas, columnas);

    printf("Llenar la segunda matriz:\n");
    llenarMatriz(matrizB, filas, columnas);

    sumarMatrices(matrizA, matrizB, resultado, filas, columnas);

    printf("Resultado de la suma de matrices:\n");
    mostrarMatriz(resultado, filas, columnas);

    return 0;
}