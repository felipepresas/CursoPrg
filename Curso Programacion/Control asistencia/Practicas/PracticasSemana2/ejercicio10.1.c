#include <stdio.h>
#include <math.h>

int main () {   
    
    float azucar1K=0.60, cafe1k=0.72, dinero;
    float kga,kgc,vuelta;
    printf("Introduzca el dinero: ");
    scanf("%f",&dinero);

    kga=(dinero*0.5)/0.6;
    printf("\nLa cantidad de azucar es: %.2f \n",kga);

    kgc=(dinero*0.33)/0.28;
    printf("\nLa cantidad de  cafe es: %.2f \n",kgc);

    vuelta=dinero*0.17;
    printf("\nEl dimero que queda: %.2f\n",vuelta ); 

    system ("pause");
}