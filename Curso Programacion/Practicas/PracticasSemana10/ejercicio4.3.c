/* Vamos a crear un pequeño programa en C que lea 
una cadena de caracteres con fgets y le transforme
el \n del final en un numero 5
fgets(nombre_variable, tamaño, stdin) */

#include <stdio.h>
#include <string.h>

int main (){
    char cad[10];
    int i;
    printf("Indique cadena: ");
    fgets(cad,10,stdin);

    for ( i = 0; i <= '\n'; i++)
    {
        if (cad[i]=='\n')
        {
            cad[i]=5;
        }
        printf("Los caracteres son: %c \n",cad[i]);
        
    }
    system("pause");
}