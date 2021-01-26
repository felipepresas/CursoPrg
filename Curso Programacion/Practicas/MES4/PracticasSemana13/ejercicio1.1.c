/* Vamos a crear una funcion que me permita 
quitar el salto de linea a una cadena recogida a través de fgets */

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
            cad[i] = '\0';
        }
        printf("La cadena es : %s\n", cad[i]);
    }
    printf("La cadena es : %s\n", cad);

    
    system("pause");
}