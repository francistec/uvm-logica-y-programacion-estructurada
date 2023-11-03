/******************************************************************************************
* Realiza un programa en C que lea una calificación por teclado y haga lo siguiente:
* Si la calificación es menor que cero o mayor que 10 imprimir “Error”
* 
* Si la calificación es 10 imprimir “Excelente”
* Si la calificación es 9 imprimir “Muy bien”
* Si la calificación es 8 imprimir “Bien”
* Si la calificación es 7 imprimir “Regular”
* Si la calificación es mayor o igual a cero y menor o igual a 6 imprimir “No acreditado”
*******************************************************************************************/
#include <stdio.h>
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); //Configuramos la consola para poder mostrar mennsajes

    int calificacion;

    // Solicitar al usuario que ingrese una calificación
    printf("Ingresa una calificación: ");
    scanf("%d", &calificacion);

    if (calificacion < 0 || calificacion > 10) {
        printf("Error\n");
    } else if (calificacion == 10) {
        printf("Excelente\n");
    } else if (calificacion == 9) {
        printf("Muy bien\n");
    } else if (calificacion == 8) {
        printf("Bien\n");
    } else if (calificacion == 7) {
        printf("Regular\n");
    } else {
        printf("No acreditado\n");
    }

    return 0;
}