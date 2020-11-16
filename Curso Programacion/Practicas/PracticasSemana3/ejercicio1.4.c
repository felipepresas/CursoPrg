/* Vamos a crear un programa en C que nos pida un numero 
por teclado y nos diga si dicho numero es par o impar */
#include <stdio.h>

int main (){
    int numero;

    printf("Indique el numero: ");
    scanf("%d",&numero);

    
    if (numero%2==0)
        printf("Par");
    else
        printf("impar\n");
    

    system ("pause");
}
    
