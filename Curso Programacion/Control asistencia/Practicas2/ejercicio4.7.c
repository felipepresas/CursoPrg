/* Vamos a realizar un programa en C que permita realizar las siguientes tareas:
Copiar una cadena en otra
Calcular la longitud de la cadena
Calcular el tamaño de la cadena
Para ello, el programa debe pedir al usuario que introduzca por teclado una cadena cualquiera */

#include <stdio.h>
#include <string.h>
    int main (){
        const char d;
        char cadena[40];

        printf("Indique cadena:");
        gets(cadena);


        printf("La cadena es%s ",cadena);
        //strcpy(cadena,5 );
        printf("\nEl tama%co cadena es%i \n",d+164, sizeof cadena);

        system("pause");


    }