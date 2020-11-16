/*B) Vamos a dar dos oportunidades a la persona que introduce el numero */

#include <stdio.h>

int main (){
    int boleto; 
    const int premiado=12345;

    printf("Introduzca boleto 5 numeros: ");
    scanf("%c",&boleto);

    if (boleto== premiado){
        printf("\nGanaste\n");
    }
    else if
    {
        printf("Perdiste, vuelve a intentar:");
        printf("Introduzca boleto 5 numeros: ");
        scanf("%c",&boleto);
        if (boleto== premiado){
            printf("\nGanaste\n");
            }
        else
        {
            printf("\nPerdiste\n");   
        }    
    }
    system("pause");
}