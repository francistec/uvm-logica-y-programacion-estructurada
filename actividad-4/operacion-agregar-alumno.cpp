#include <stdio.h>

// Función para agregar un alumno
void agregarAlumno(struct Alumno alumnos[], int *contador) {
    if (*contador < 100) {  // Suponemos un máximo de 100 alumnos
        struct Alumno nuevoAlumno;
        printf("Ingrese la matrícula del estudiante: ");
        scanf("%d", &nuevoAlumno.matricula);
        printf("Ingrese el nombre: ");
        scanf("%s", nuevoAlumno.nombre);
        printf("Ingrese el apellido paterno: ");
        scanf("%s", nuevoAlumno.apellidoPaterno);
        printf("Ingrese el apellido materno: ");
        scanf("%s", nuevoAlumno.apellidoMaterno);
        printf("Ingrese la carrera: ");
        scanf("%s", nuevoAlumno.carrera);
        printf("Ingrese el correo electrónico: ");
        scanf("%s", nuevoAlumno.correoElectronico);
        printf("Ingrese el teléfono: ");
        scanf("%s", nuevoAlumno.telefono);

        alumnos[*contador] = nuevoAlumno;
        (*contador)++;

        printf("Alumno agregado con éxito.\n");
    } else {
        printf("No se pueden agregar más alumnos. El límite ha sido alcanzado.\n");
    }
}