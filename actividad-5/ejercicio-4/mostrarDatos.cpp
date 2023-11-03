#include <stdio.h>

// Función para mostrar los datos de un estudiante
void mostrarDatos(struct Estudiante estudiante) {
    printf("Datos del estudiante:\n");
    printf("Matrícula: %d\n", estudiante.matricula);
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Carrera: %s\n", estudiante.carrera);
    printf("Promedio: %.2f\n", estudiante.promedio);
    printf("Dirección: %s\n", estudiante.direccion);
}
