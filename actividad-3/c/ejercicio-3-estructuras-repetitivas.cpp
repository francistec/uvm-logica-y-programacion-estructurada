#include <stdio.h>
#include <windows.h>

// Función para verificar si un número es par o impar
void verificarParImpar(int numero) {
    if (numero % 2 == 0) {
        printf("%d es un número par.\n", numero);
    } else {
        printf("%d es un número impar.\n", numero);
    }
}

int main() {

    SetConsoleOutputCP(65001); //Configuramos la consola para poder mostrar mennsajes
    int opcion, numero;

    do {
        // Mostrar el menú
        printf("\nMenu:\n");
        printf("1. Verificar si un número es par o impar\n");
        printf("2. Salir\n");
        printf("Ingrese la opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                // Solicitar al usuario que ingrese un número
                printf("Ingrese un número: ");
                scanf("%d", &numero);

                // Llamar a la función para verificar si es par o impar
                verificarParImpar(numero);
                break;
            case 2:
                printf("Saliendo del programa. ¡Hasta luego!\n");
                break;
            default:
                printf("Opción no válida. Inténtelo de nuevo.\n");
        }
    } while (opcion != 2);

    return 0;
}
   