#include <stdio.h>

// Función para capturar los datos de un estudiante
void capturarDatos(struct Estudiante *estudiante) {
    printf("Ingrese la matrícula del estudiante: ");
    scanf("%d", &(estudiante->matricula));
    printf("Ingrese el nombre del estudiante: ");
    scanf(" %[^\n]", estudiante->nombre);  // Leemos el nombre completo
    printf("Ingrese la carrera del estudiante: ");
    scanf(" %[^\n]", estudiante->carrera);  // Leemos la carrera completa
    printf("Ingrese el promedio del estudiante: ");
    scanf("%f", &(estudiante->promedio));
    printf("Ingrese la dirección del estudiante: ");
    scanf(" %[^\n]", estudiante->direccion);  // Leemos la dirección completa
}
