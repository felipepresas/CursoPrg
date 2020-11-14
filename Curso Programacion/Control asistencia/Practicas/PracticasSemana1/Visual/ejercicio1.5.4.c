#include <stdio.h>

int main(){

    int hora,  minutos, segundos;

        printf("\n Indica la hora: ");
        scanf("%d",&hora);
        printf("\n Indica el minuto: ");
        scanf("%d",&minutos);
        printf("\n Indica los segundos: ");
        scanf("%d",&segundos);
        
        printf("Cantidad en segundos es: %d",((hora*60)*60)+(minutos*60)+segundos);


}
