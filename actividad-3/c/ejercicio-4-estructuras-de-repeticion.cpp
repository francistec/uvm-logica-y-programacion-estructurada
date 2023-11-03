/********************************************************
* Dado n artículos pedir para cada uno de ellos la cantidad
* y el precio y calcular el total a pagar.
********************************************************/
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); //Configuramos la terminal para poder mostrar mennsajes con acentos
    int n;  // Variable para almacenar la cantidad de artículos
    double total = 0.0;  // Variable para almacenar el total a pagar

    // Solicitar al usuario que ingrese la cantidad de artículos
    printf("Ingrese la cantidad de artículos: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        double cantidad, precio;  // Variables para almacenar la cantidad y el precio del artículo
        printf("Artículo %d:\n", i);
        // Solicitar al usuario que ingrese la cantidad y el precio del artículo
        printf("Ingrese la cantidad: ");
        scanf("%lf", &cantidad);
        printf("Ingrese el precio por unidad: ");
        scanf("%lf", &precio);

        double subtotal = cantidad * precio;  // Calcular el subtotal (cantidad * precio)
        total += subtotal;  // Agregar el subtotal al total
        // Mostrar el subtotal para el artículo actual
        printf("Subtotal para el artículo %d: %.2lf\n", i, subtotal);
    }

    // Mostrar el monto total a pagar al usuario
    printf("El total a pagar es: %.2lf\n", total);

    return 0;
}