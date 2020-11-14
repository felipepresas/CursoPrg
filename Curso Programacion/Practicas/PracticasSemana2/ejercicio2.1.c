/* Vamos a crear un programa en C que pida introducir
una letra por teclado y mevuelva la siguiente salida:
La letra inicial es:
La letra final en: */
#include <stdio.h>

int main (){
    char letra;

    printf("Introduzca una letra: ");
    scanf("%c",&letra);

    // letra=letra-32;

    printf("\nTu letra mayuscula es: %c\n",toupper(letra));

    system("pause");
    // toupper
    // tolower
}