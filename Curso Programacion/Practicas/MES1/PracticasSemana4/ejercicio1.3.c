/* Vamos a crear un programa que pedirá al usuario 3 numeros enteros
Devolverá la cantidad de numeros altos, medios y bajos
Num bajo entre 0 y 10
Num medio entre 11 y 100*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;

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
            printf("Numero 1 es menor\n");
        }
        else if (num1 > 10 && num1 <= 100)
        {
            printf("Numero 1 es medio\n");
        }
        else
        {
            printf("Numero 1 es alto\n");
        }
        if (num2 >= 0 && 10 <= num2)
        {
            printf("Numero 2 es menor\n");
        }
        else if (num2 > 10 && num2 <= 100)
        {
            printf("Numero 2 es medio\n");
        }
        else
        {
            printf("Numero 2 es alto\n");
        }
        if (num3 >= 0 && 10 <= num3)
        {
            printf("Numero 3 es menor\n");
        }
        else if (num3 > 10 && num3 <= 100)
        {
            printf("Numero 3 es medio\n");
        }
        else
        {
            printf("Numero 3 es alto\n");
        }
    }
    system("pause");
    
}