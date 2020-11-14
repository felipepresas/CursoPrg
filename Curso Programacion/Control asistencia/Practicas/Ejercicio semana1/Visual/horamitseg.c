#include <stdio.h>

int main (){
    int num1,aux;

    printf("Indica numero: ");
    scanf("%d",&num1);
    
    aux=num1;
    num1+=1;

    printf("\nCambiamos valor numero: ");
    scanf("%d",&num1);

    printf("\nValor al comienzo: %d y valor despues: %d",aux,num1);
}
