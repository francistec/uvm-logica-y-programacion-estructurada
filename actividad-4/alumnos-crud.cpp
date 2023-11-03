#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "menu.cpp"
#include "alumno.cpp"
#include "operacion-agregar-alumno.cpp"
#include "operacion-mostrar-alumno.cpp"
#include "operacion-modificar-alumnos.cpp"
#include "operacion-eliminar-alumno.cpp"



int main() {
    SetConsoleOutputCP(65001);
    struct Alumno alumnos[100];
    int contador = 0;
    int opcion = 0;

    // Como 1 siempre es verdadro, despues de cada operación
    // se volvera ejecutar el bloque
    while (true) {
        renderMenu();
        // scanf("%d", &opcion);
        if (scanf("%d", &opcion) != 1) {
            printf("Entrada no válida. Debe ingresar un número entero.\n");
            // Limpiamos el búfer de entrada para evitar repeticiones de mensajes de error
            while (getchar() != '\n');
            continue;
        }

        switch (opcion) {
            case 1:
                agregarAlumno(alumnos, &contador);
                break;
            case 2:
                mostrarAlumnos(alumnos, contador);
                break;
            case 3:
                modificarAlumno(alumnos, contador);
                break;
            case 4:
                eliminarAlumno(alumnos, &contador);
                break;
            case 5:
                return 0;
            default:
                printf("Opción no válida. Inténtelo de nuevo.\n");
                // return 0;
        }
    }

    return 0;
}


/* Referencies */
// https://iq.opengenus.org/print-text-in-color-in-c/
// https://itecnote.com/tecnote/using-the-scanf-function-in-while-loop/
// https://www.delftstack.com/es/howto/c/_r-in-c/
// https://stackoverflow.com/questions/10882277/properly-print-utf8-characters-in-windows-console
// https://www.w3schools.com/c/c_structs.php
// https://www.youtube.com/watch?v=mOPYyqSkPO0&list=PL43pGnjiVwgSSRlwfahAuIqoJ8TfDIlHq&index=2&ab_channel=CodeBeauty