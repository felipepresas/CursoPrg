/* Vamos a emular el funcionamiento de la funcion STRCMP */

#include <stdio.h>
#include <string.h>
int main()
{
    int i,igualdad=0;
    char palabra1[30], palabra2[sizeof(palabra1)];
    printf("Indique la palabra: ");
    gets(palabra1);
    printf("\nIndique la palabra: ");
    gets(palabra2);
    if (strlen(palabra1) == strlen(palabra2))
    {
        for (i = 0; i <= palabra1[i] != '\0'; i++)
        {
            if (tolower(palabra1[i]) == tolower(palabra2[i]))
            {
                printf("El caracter %d es igual:%c = %c \n", i, palabra1[i], palabra2[i]);
                igualdad++;
            }
        }
        if (igualdad==strlen(palabra1))
        {
            printf("Las palabras son iguales\n");
        }
        else
        {
            printf("Las palabras son diferentes\n");
        } 
    }
    else
    {
        printf("Resultado=1");
    }
    printf("Palabra es:%s Copia es:%s \n", palabra1, palabra2);
    getchar();
}