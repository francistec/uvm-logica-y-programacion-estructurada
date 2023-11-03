#include <stdio.h>

// Función para llenar el arreglo con calificaciones
void llenarArreglo(int calificaciones[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Ingrese la calificación %d: ", i + 1);
        scanf("%d", &calificaciones[i]);
    }
}