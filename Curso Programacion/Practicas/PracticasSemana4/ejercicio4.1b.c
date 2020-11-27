// Dados 3 numeros enteros ordenarlos de mayor a menor
#include<stdio.h>
int main (){
    int num1,num2,num3;

    printf("Indique el valor1: ");
    scanf("%d",&num1);
    printf("Indique el valor2: ");
    scanf("%d",&num2);
    printf("Indique el valor3: ");
    scanf("%d",&num3);

    if (num1==num2 &&num1==num3 )
    {
        printf("Todos los Vaores son iguales: %d - %d  - %d\n",num1,num2,num3);  
    }
    else
    {
    if (num1>num2 && num1>num3)
    {
        printf("Valor 1 es el Mayor %d \n",num1);
    }
    else if ((num1<num2 && num1>num3) || (num1>num2 && num1<num3))
    {
        printf("Valor 1 es el del medio %d \n",num1);
    }
        else if (num1==num2) 
    {
        printf("Valor 1 es igual al Valor2 %d \n",num2);
    }
            else if (num1==num3) 
    {
        printf("Valor 1 es igual al Valor3 %d \n",num3);
    }
    else
    {
        printf("Valor 1 es el menor %d \n",num1);
    }
    if (num2>num1 && num2>num3)
    {
        printf("Valor 2 es el Mayor %d \n",num2);
    }
    else if ((num2<num1 && num2>num3) || (num2>num1 && num2<num3))
    {
        printf("Valor 2 es el del medio %d \n",num2);
    }
            else if (num2==num1) 
    {
        printf("Valor 2 es igual al Valor1 %d \n",num1);
    }
            else if (num2==num3) 
    {
        printf("Valor 2 es igual al Valor3 %d \n",num3);
    }
    else
    {
        printf("Valor 2 es el menor %d \n",num2);
    }
    if (num3>num1 && num3>num2)
    {
        printf("Valor 3 es el Mayor %d \n",num3);
    }
    else if ((num3<num1 && num3>num2) || (num3>num1 && num3<num2))
    {
        printf("Valor 3 es el del medio %d \n",num3);
    }
            else if (num3==num1) 
    {
        printf("Valor 3 es igual al Valor1 %d \n",num1);
    }
            else if (num3==num2) 
    {
        printf("Valor 3 es igual al Valor2 %d \n",num2);
    }
    else
    {
        printf("Valor 3 es el menor %d \n",num3);
    }
    }
    system("pause");       
}