
 /* A)Vamos a implementar un ejercicio que pida una nota por teclado 
y me diga si el alumno está aprobado o suspenso */

#include <stdio.h>

int main (){

    float nota;

    printf("Indique una nota: ");
    scanf("%f",&nota);

    if(nota>4.99)
        printf("\nAprobado\n");
    else
    {
        printf("\nsuspenso\n");
    };
    system("pause");
    
}