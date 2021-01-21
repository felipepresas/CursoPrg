
/* Vamos a crear un programa en C que 
nos pida una cadena y una vocal por teclado
Lo que tiene que hacer el programa es sustituir 
todas las vocales de la cadena por la que hemos 
introducido.
La visualizacion final será la cadena original
 y la cadena cambiada */
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char frase[50], vocal;
    printf("Indique la frase:");
    gets(frase);
    printf("Indique la vocal:");
    scanf("%c", &vocal);
    char copia[sizeof(frase)];
    strcpy(copia, frase);
    for (i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
        {
            copia[i]=vocal;
        }
    }
    printf("Original: %s \nCopia: %s\n", frase, copia);

    system("pause");
}