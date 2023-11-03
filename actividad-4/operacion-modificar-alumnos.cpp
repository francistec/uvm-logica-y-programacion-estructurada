#include <stdio.h>

// Función para modificar un alumno
void modificarAlumno(struct Alumno alumnos[], int contador) {
    int matricula;
    printf("Ingrese la matrícula del alumno que desea modificar: ");
    scanf("%d", &matricula);

    for (int i = 0; i < contador; i++) {
        if (alumnos[i].matricula == matricula) {
            printf("Ingrese el nuevo nombre: ");
            scanf("%s", alumnos[i].nombre);
            printf("Ingrese el nuevo apellido paterno: ");
            scanf("%s", alumnos[i].apellidoPaterno);
            printf("Ingrese el nuevo apellido materno: ");
            scanf("%s", alumnos[i].apellidoMaterno);
            printf("Ingrese la nueva carrera: ");
            scanf("%s", alumnos[i].carrera);
            printf("Ingrese el nuevo correo electrónico: ");
            scanf("%s", alumnos[i].correoElectronico);
            printf("Ingrese el nuevo teléfono: ");
            scanf("%s", alumnos[i].telefono);

            printf("Alumno modificado con éxito.\n");
            return;
        }
    }

    printf("No se encontró un alumno con esa matrícula.\n");
}