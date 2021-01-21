#include <stdio.h>
#include <math.h>

int main () {   
    
    float azucar1K=0.60, cafe1k=0.72, dinero;

    printf("Introduzca el dinero: ");
    scanf("%f",&dinero);

    printf("\nLa cantidad de azucar es: %.2f \nLa cantidad de  cafe es: %.2f \nEl dimero que queda: %.2f\n",(dinero*0.5)/0.6,(dinero*0.33)/0.72,(dinero*0.17) ); 

    system ("pause");
}