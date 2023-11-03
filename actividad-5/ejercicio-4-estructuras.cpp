#include <stdio.h>
#include "ejercicio-4/Estudiante.cpp"
#include "ejercicio-4/capturarDatos.cpp"
#include "ejercicio-4/mostrarDatos.cpp"


int main() {
    struct Estudiante estudiante;

    capturarDatos(&estudiante);
    mostrarDatos(estudiante);

    return 0;
}
