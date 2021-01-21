/* Vamos a pedir el nombre de un alumno
Y vamos a pedir las notas de 3 de sus examenes
Una vez calculada la media, queremos saber
Si ha suspendido
SI ha sacado un suficiente( entre 5 y 6)
SI ha sacado un bien (entre 6 y 7)
Si ha sacado un notable (entre 7 y 9)
Si ha sacado un sobresaliente (entre 9 y 10)
Ojo.... Porque las notas solo pueden estar entre 0 y 10
El resultado final será algo del tipo:
El alumno [XXXX] con notas A, B y C tiene de media un 
[loquesealamedia] y su calificación es [calificacion] */

#include <stdio.h>
#include <string.h>
int main()
{
    char nombreAlumno[20], clasificacion[20];
    float nota1, nota2, nota3, media;
    

    printf("Indique nombre alumno: ");
    gets(nombreAlumno);
    printf("Introduzca nota 1: ");
    scanf("%f", &nota1);
    printf("Introduzca nota 2: ");
    scanf("%f", &nota2);
    printf("Introduzca nota 3: ");
    scanf("%f", &nota3);

    if (nota1 < 0 || nota2 < 0 || nota3 < 0 || nota1 > 10 || nota2 > 10 || nota3 > 10)
    {
        printf("Has introducido una nota equivocada\n");
        return(1);
    }
    else
    {
        media = (nota1 + nota2 + nota3) / 3.0;
        if (media < 5)
        {
            strcpy (clasificacion,"suspendido");
        }
        else if (media >= 5 || media <= 6)
        {
            strcpy (clasificacion,"Suficiente");
           
        }
        else if (media >= 6 || media <= 7)
        {
            strcpy (clasificacion,"Bien");
        }
        else if (media >= 8 || media <= 9)
        {
            strcpy (clasificacion,"notable");
          
        }
        else if (media >= 9 || media <= 10)
        {
            strcpy (clasificacion,"Sobresaliente");
            
        }
        printf("El alumno %s \ncon notas %.2f %.2f y %.2f \nTiene de media un %.2f \ny su calificacion es %s\n", nombreAlumno, nota1, nota2, nota3, media, clasificacion);
    }
    system("pause");
}