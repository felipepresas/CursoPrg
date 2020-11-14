#include <stdio.h>
#include <math.h>


int main (){
    float res1, res2;

    printf("Indicar r1 :");
    scanf("%f",&res1);
    printf("Indicar r2 :");
    scanf("%f",&res2);

    printf("\nResistencia equivalente: %.2f \n", (res1*res2)/(res1+res2) );

    system ("pause");
}   
