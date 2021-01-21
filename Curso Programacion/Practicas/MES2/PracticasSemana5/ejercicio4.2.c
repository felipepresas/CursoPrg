/* Vamos a crear un ejercico en C que compare dos 
cadenas introducidas por teclado y me diga si son diferentes */
#include <stdio.h>
int main()
{
    char palabra1[20] = "";
    char palabra2[20] = "";
    printf("Indique palabra 1:");
    gets(palabra1);
    printf("Indique palabra 2:");
    gets(palabra2);
    if (strcmp(palabra1, palabra2) != 0)
    {
        printf("son diferentes");
    }
    else
    {
        printf("son iguales");
    }
    system("pause");
}