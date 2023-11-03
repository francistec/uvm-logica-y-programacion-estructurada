#include <stdio.h>

// Función para mostrar la lista de alumnos
void mostrarAlumnos(struct Alumno alumnos[], int contador) {
    printf("Lista de Alumnos:\n");
    for (int i = 0; i < contador; i++) {
        printf("Matrícula: %d\n", alumnos[i].matricula);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Apellido Paterno: %s\n", alumnos[i].apellidoPaterno);
        printf("Apellido Materno: %s\n", alumnos[i].apellidoMaterno);
        printf("Carrera: %s\n", alumnos[i].carrera);
        printf("Correo Electrónico: %s\n", alumnos[i].correoElectronico);
        printf("Teléfono: %s\n", alumnos[i].telefono);
        printf("\n");
    }
}