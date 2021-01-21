/* Vamos a crear un pequeño script en C que dada 
una palabra sea capaz de contar el numero de vocales que tiene */
#include <stdio.h>
#include <string.h>
int main()
{
    char palabra[40];
    int contador = 0, i;
    printf("Indique la palabra:");
    gets(palabra);
    printf("%s", palabra);

    for (i = 0; i < strlen(palabra); i++)
    {
        if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u')
        {
            contador += +1;
            printf("\n la cuenta de vocales %d \n", contador);
        }
    }
    system("pause");
}