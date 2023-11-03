#include <stdio.h>

// Función para calcular el promedio de las calificaciones
float calcularPromedio(int calificaciones[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += calificaciones[i];
    }
    return suma / n;
}
