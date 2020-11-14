#include <stdio.h>
#define a_dias=86400 
#define a_horas=3600 
#define a_minutos=60 

int main(){

    int resultado, segundos;

        printf("\n Indica un numero de segundos:");
        scanf("%d",&segundos);
        
        printf("\nCantidad de dias cociente es: %d",( segundos / a_dias));
        // printf("\nCantidad de dias resto es: %d",(segundos % 86400));
        printf("\nCantidad de horas cociente es: %d",( segundos / a_horas));
        // printf("\nCantidad de horas resto es: %d",(segundos % 3600));
        printf("\nCantidad de minutos cociente es: %d",( segundos / a_minutos));
        printf("\nCantidad de segundos es: %d",(segundos % 60));
    
}

