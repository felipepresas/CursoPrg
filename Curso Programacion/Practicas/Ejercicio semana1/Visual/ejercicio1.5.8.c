#include <stdio.h>

int main(){

    int hora,  minutos, segundos;

        printf("\n Indica la hora:minutos:segundos ");
        scanf("%d:%d:%d",&hora,&minutos&segundos);
        
        printf("Cantidad en segundos es: %d",((hora*60)*60)+(minutos*60)+segundos);

}