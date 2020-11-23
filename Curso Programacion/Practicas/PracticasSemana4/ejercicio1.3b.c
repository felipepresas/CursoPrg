/* Vamos a crear un programa que pedirá al usuario 3 numeros enteros
Devolverá la cantidad de numeros altos, medios y bajos
Num bajo entre 0 y 10
Num medio entre 11 y 100*/
#include <stdio.h>
int main()
{
    int num1, num2, num3, sum1,sum2,sum3;

    printf("Indique los numeros 1:");
    scanf("%d", &num1);
    printf("Indique los numeros 2:");
    scanf("%d", &num2);
    printf("Indique los numeros 3:");
    scanf("%d", &num3);

    if (num1 < 0 || num2 < 0 || num3 < 0)
    {
        printf("Intente con numeros positivos\n");
    }
    else
    {
        if (num1 >= 0 && 10 <= num1)
        {
            sum1=+1;
        }
        else if (num1 > 10 && num1 <= 100)
        {
            sum1=+1;
        }
        else
        {
            sum1=+1;
        }
        if (num2 >= 0 && 10 <= num2)
        {
            sum2=+1;
        }
        else if (num2 > 10 && num2 <= 100)
        {
            sum2=+1;
        }
        else
        {
            sum2=+1;
        }
        if (num3 >= 0 && 10 <= num3)
        {
            sum3=+1;
        }
        else if (num3 > 10 && num3 <= 100)
        {
            sum3=+1;
        }
        else
        {
            sum3=+1;
        }
        printf("Los menores son %d los medios son %d los altos %d ",sum1,sum2,sum3);
        
    }
    system("pause");
    
}