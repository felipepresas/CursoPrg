/* Vamos a crear un programa en C que a partir de una cadena de caracteres haga lo siguiente:
Crear una funcion que reciba dicha cadena y nos devuelva otra. Esta nueva cadena será la
misma que la anterior pero sustituyendo todas las vocales con el simbolo "trebol"
La funcion recibe una cadena de caracteres y devuelve una cadena de caracteres */
#include <stdio.h>
#include <string.h>

char * transformar(char *);

int main()
{
    char cadena[100] = "Hola Mundo";

    printf("Cadena %s\n", transformar(cadena));
    system("pause");
}
char * transformar(char *cadena)
{
    int i = 0;
    strlwr(cadena);
    while (i < strlen(cadena))
    {
        if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u')
        {
            cadena[i] = 5;
        }
        i++;
    }
    return cadena;
}