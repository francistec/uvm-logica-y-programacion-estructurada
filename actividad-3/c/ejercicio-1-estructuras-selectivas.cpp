#include <stdio.h>
#include <windows.h>

using namespace std;
/*****************************************************************
 * Realiza un programa en Python que lea un número por teclado y 
 * determine si es par o impar.
 *****************************************************************/
int main()
{
    SetConsoleOutputCP(65001); //Configuramos la consola para poder mostrar mennsajes

    int numero;  //Variable que guardara el numero introducido

    // Solicitar al usuario que ingrese un número
    printf("Ingrese el número a evalur: ");  //Imprimimos en pantalla la instrucción al usuario
    scanf("%d", &numero); //leemos el dato que introduce

    //normalmente aqui deberíamos realizar una validación para descartar valores que 
    //no sean númericos

    // Comprobar si el número es par o impar
    if (numero % 2 == 0) {
        printf("%d es un número par.\n", numero);
    } else {
        printf("%d es un número impar.\n", numero);
    }

    return 0;
}
