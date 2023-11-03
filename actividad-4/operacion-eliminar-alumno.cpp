#include <stdio.h>

// Función para eliminar un alumno
void eliminarAlumno(struct Alumno alumnos[], int *contador) {
    int matricula;
    printf("Ingrese la matrícula del alumno que desea eliminar: ");
    scanf("%d", &matricula);

    for (int i = 0; i < *contador; i++) {
        if (alumnos[i].matricula == matricula) {
            for (int j = i; j < *contador - 1; j++) {
                alumnos[j] = alumnos[j + 1];
            }
            (*contador)--;
            printf("Alumno eliminado con éxito.\n");
            return;
        }
    }

    printf("No se encontró un alumno con esa matrícula.\n");
}