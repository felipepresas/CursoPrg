/* Vamos a crear un programa que recoja una palabra y le de la vuelta.
La salida del programa debe mostrar la palabra original 
y la palabra dada la vueltaPor ejemplo:Julio -> oiluJ */
#include <stdio.h>
#include <string.h>
int main()
{
    char frase[50], copia[sizeof(frase)];
    int i,j=0;
    puts("Indique la palabra: ");
    gets(frase);

    for (i = strlen(frase)-1; i>= 0; i--)
    {
        copia[j] = frase[i];
        j++;
    }

    printf("La frase es: %s\n", frase);
    printf("La copia es: %s\n", copia);
    system("pause");
}