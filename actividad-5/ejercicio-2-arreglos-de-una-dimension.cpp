#include <stdio.h>
#include "ejercicio-2/calcularPromedio.cpp"
#include "ejercicio-2/llenarArreglo.cpp"
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    int n;
    printf("Ingrese la cantidad de calificaciones: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("La cantidad de calificaciones debe ser mayor que cero.\n");
        return 1;  // Terminar el programa con un código de error
    }

    int calificaciones[n];

    llenarArreglo(calificaciones, n);

    float promedio = calcularPromedio(calificaciones, n);

    printf("Calificaciones ingresadas:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", calificaciones[i]);
    }
    printf("\n");

    printf("El promedio de las calificaciones es: %.2f\n", promedio);

    return 0;
}