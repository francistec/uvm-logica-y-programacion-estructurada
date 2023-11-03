#include <stdio.h>
#include "ejercicio-1/esPar.cpp"
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    int numero;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    // Llamar a la función esPar y mostrar el resultado
    if (esPar(numero)) {
        printf("%d es un número par.\n", numero);
    } else {
        printf("%d es un número impar.\n", numero);
    }

    return 0;
}