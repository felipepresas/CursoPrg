/* Vamos a crear un programa en C que emule a la función strlen
es decir, le pasamos una cadena y nos debe dar su longitud */

#include <stdio.h>
int main()
{
    char palabra[20];
    int longitud = 0, i;
    printf("Indique la cadena:");
    gets(palabra);

    for (i = 0; i < palabra[i] != '\0'; i++)
    {
        longitud++;
    }
    printf("La longitud es:%d \n", longitud);
    system("pause");
}