/* Vamos a crear un programa en C que nos permita 
diferenciar si una letra introducida es vocal o no */
#include <stdio.h>

int main (){
    char letra;
    

    printf("Introduzca la letra: ");
    scanf("%c",&letra);

    if ((letra==97) || (letra==65))
        printf("\nEsto es una vocal\n");
    else if (letra==101 || letra==69)
        printf("\nEsto es una vocal\n");
    else if (letra==105 || letra==73)
        printf("\nEsto es una vocal\n");
    else if (letra==111 || letra==79)
        printf("\nEsto es una vocal\n");
    else if (letra==117 || letra==85)
        printf("\nEsto es una vocal\n");
    else
        printf("\nEs una consonante\n");

system("pause");

}