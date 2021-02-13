/* Vamos a crear un programa que defina una funcion que recibe 2 cadenas de caracteres 
y devuelve una tercera cadena de caracteres que es la concatenacionVamos
a crear una segunda funcion que reciba dicha concatenacion 
y la muestre por pantalla (es decir, no devuelve nada */

#include <stdio.h>
#include <string.h>

char *concatFe(char *,char *);

int main (int argc, char *argv[]){
    concatFe("hola,mundo");
}

char * concatFe(char *cad1,char *cad2){
    char concatenada[100];
    int i = 0, j = 0;
    for (i = 0; i < strlen(cad1); i++)
    {
        concatenada[i] = cad1[i];
    }
    for (j = 0; j < strlen(cad2); i++, j++)
    {
        concatenada[i] = cad2[j];
    }
    return concatenada;
}