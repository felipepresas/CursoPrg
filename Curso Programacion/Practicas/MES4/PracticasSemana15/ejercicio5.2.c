/* Vamos a crear un programa en C que rellene los datos de 5 alumnos (de forma automatica)
Para ello, crearemos una estructura que se llamará alumno y que contendra nombre, apellidos, edad */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i;
    struct alumno
    {
        int numRegistro;
        char nombre[50];
        char apellidos[50];
        char edad[50];
    };
    struct alumno miAlumno[50];

    

    for ( i = 0; i < 1; i++)
    {
        strcpy(miAlumno[i].nombre, argv[i+1]);
        printf("%s\n", miAlumno[i].nombre);
        strcpy(miAlumno[i].apellidos, argv[i+2]);
        printf("%s\n", miAlumno[i].apellidos);
        strcpy(miAlumno[i].edad, argv[i+3]);
        printf("%s\n", miAlumno[i].edad); 
        miAlumno[i].numRegistro=i+1;
    }

    system("pause");
}