#include <stdio.h>
#include <string.h>
int main()
{ //definicion de una estructura
    struct alumno
    {
        char nombre[50];
        char apellido1[50];
        char apellido2[50];
        int edad;
        int telefono;
    };

    char cadena[100];
    int numeros[100];
    struct alumno miAlumno;
        
    strcpy(miAlumno.nombre, "Orto");
    strcpy(miAlumno.apellido1, "aaa");
    strcpy(miAlumno.apellido2, "bbb");
    miAlumno.edad = 31;
    miAlumno.telefono = 666777888;
    printf("%s", miAlumno.apellido1);
    
    return 0;
}