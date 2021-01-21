//Emular STRLWR transformar una cadena mayuscula
#include <stdio.h>
#include <string.h>
int main (){
    char palabra[50],mayuscula[sizeof(palabra)];
    int i;
    printf("Indique la palabra:");
    gets(palabra);
    
    for ( i = 0; i < palabra[i] != '\0'; i++)
    {
       mayuscula[i]= toupper(palabra[i]);
    }
    printf("La palabra en mayuscula es:%s : \n",mayuscula);
    
    getchar();