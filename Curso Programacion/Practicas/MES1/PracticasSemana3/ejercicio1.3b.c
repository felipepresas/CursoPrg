/* B) Realizar el mismo ejercicio teniendo en cuenta que un 5 es
 un aprobado pero utilizando solamente comparacion unaria (<,>,==) */

#include <stdio.h>

int main (){

    float nota;

    printf("Indique una nota: ");
    scanf("%f",&nota);

    if(nota>5)
        printf("\nAprobado\n");
    else if(nota==5){
        printf("\nAprobado\n");
        }
    else{
        printf("\nSuspenso");
        }

    system("pause");

    
}