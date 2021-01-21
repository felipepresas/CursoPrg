/* A)Introduciremos por teclado un numero cualquiera de 5 dígitos,
y el programa comprobará si el boleto ha resultado premiado*/

#include <stdio.h>

int main (){
    int boleto;

    printf("Introduzca boleto 5 numeros: ");
    scanf("%d",&boleto);
    


    if (boleto== 53274)
    {
        printf("Ganaste\n");

    }
    else printf("Perdiste\n");
    
    system("pause");
}