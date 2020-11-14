#include <stdio.h>

int main (){
    int num1,aux;

    printf("Indica numero: ");
    scanf("%d",&num1);
    
    aux=num1;
    aux=aux--;
    printf("\nValor con decremento: %d  El valor : %d y El incrementado: %d",aux--,num1,aux++);
}