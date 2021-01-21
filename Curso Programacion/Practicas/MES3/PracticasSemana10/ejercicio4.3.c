/* Vamos a crear un pequeño programa en C que lea 
una cadena de caracteres con fgets y le transforme
el \n del final en un numero 5
fgets(nombre_variable, tamaño, stdin) */

#include <stdio.h>
#include <string.h>

int main()
{
    char cad[100]="";
    int i;

    printf("Indique cadena: ");
    fgets(cad, sizeof(cad), stdin);

    for (i = 0; cad[i]!='\0'; i++)
    {
        if (cad[i] == '\n')
        {
            cad[i] = '5';
        }
        printf("La cadena es : %s\n", cad[i]);
    }
    printf("La cadena es : %s\n", cad);
    system("pause");
}