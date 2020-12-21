/* Vamos a crear un programa en C que nos permita 
mostrar en lineas separas todos los caracteres 
de una fraase introducida por teclado */
#include <stdio.h>
int main (){
    int i;
    char frase[50];
    printf("Indique la frase:");
    gets(frase);
    for ( i = 0; i < strlen(frase); i++)
    {
        printf("%c\n",frase[i]);
    }
    system("pause");
}