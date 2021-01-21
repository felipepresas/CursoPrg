/* Vamos a crear un programa en C que que, a través de una funcion, 
recoja el nombre del programa y nos pinte su carátula inicial
La funcion recibirá como parámetro el nombre del programa y devolvera nada,
 es decir, hará un printf de la caratula
*********************
PROGRAMA XXXXXXX
**********************
Va a recibir 3 parametros: nombre del programa, caracter para crear
 la caratula, ancho del terminal */

#include <stdio.h>
#include <string.h>

void caratula(char, char *, int);

int main()
{

    caratula('$', "caratula", 120);
}

void caratula(char separador, char *nombrePrograma, int ancho)
{
    int i, tam = 0;
    tam = strlen(nombrePrograma) / 2;

    for (i = 0; i < (ancho / 2); i++)
    {
        printf("%c", separador);
    }
}