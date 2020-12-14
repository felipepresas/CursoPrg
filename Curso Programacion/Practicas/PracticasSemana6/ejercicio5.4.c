/* Vamos a crear en C un pequeño programa 
que admita una frase y cuente la cantidad de vocales 
de cada tipo que tiene y la cantidad de espacios que tiene */

#include <stdio.h>
#include <string.h>
int main()
{
    char palabra[40];
    int contadora = 0, contadore = 0, contadori = 0, contadoro = 0, contadoru = 0,contadoresp=0, i;
    printf("Indique la palabra:");
    gets(palabra);
    printf("%s", palabra);

    for (i = 0; i < strlen(palabra); i++)
    {
        if (tolower(palabra[i]) == 'a')
            {
                contadora += +1;
                printf("\n la cuenta de vocales a es: %d \n", contadora);
            }
        else if (tolower(palabra[i]) == 'e')
        {
            contadore += +1;
            printf("\n la cuenta de vocales e es: %d \n", contadore);
        }
        else if (tolower(palabra[i]) == 'i')
        {
            contadori += +1;
            printf("\n la cuenta de vocales i es: %d \n", contadori);
        }
        else if (tolower(palabra[i]) == 'o')
        {
            contadoro += +1;
            printf("\n la cuenta de vocales o es: %d \n", contadoro);
        }
        else if (tolower(palabra[i]) == 'u')
        {
            contadoro += +1;
            printf("\n la cuenta de vocales u es: %d \n", contadoru);
        }
                else if (tolower(palabra[i]) == ' ')
        {
            contadoresp += +1;
            printf("\n la cuenta de espacios es: %d \n", contadoresp);
        }
    }
    system("pause");
}