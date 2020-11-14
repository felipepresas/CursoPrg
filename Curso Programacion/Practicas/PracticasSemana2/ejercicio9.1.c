#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    float num1,num2,num3;

    printf("Indique el valor del primer numero: ");
    scanf("%f",&num1);
    printf("Indique el valor del segundo numero: ");
    scanf("%f",&num2);
    printf("indiqie el valor del tercer numero: ");
    scanf("%f",&num3);

    printf("\nEl resultado es %.2f:", (-(num2) +sqrt((pow(num2,2))-4*num1*num3))/(2*num1));
    printf("\nEl resultado es %.2f:", (-(num2) -sqrt((pow(num2,2))-4*num1*num3))/(2*num1));

    system ("pause");
}     