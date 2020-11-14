#include <stdio.h>

int main (){
    int num1,num2,resul1,resul2;

    printf("\nIntroduce el primer numero:");
    scanf("%d",&num1);
    printf("\nIntroduce el segundo numero:");
    scanf("%d",&num2);
    
    resul1=num1+num2;
    resul2=num1*num2;

    printf("\nLa suma es:%d \nEl promedio es:%d",resul1,resul2);
}