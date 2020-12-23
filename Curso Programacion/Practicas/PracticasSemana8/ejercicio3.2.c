/* Escriba un programa que pida un valor límite positivo y a 
continuación pida números hasta que la suma de los números 
introducidos supere el límite inicial. */
#include <stdio.h>
#include <string.h>

int main()
{
    int i, limiteMax, sumNum = 0, num;
    printf("Indique el limete positivo:");
    scanf("%d", &limiteMax);
    if (limiteMax < 0)
    {
        printf("Indico un numero negativo\n");
    }
    else
    {
        while (sumNum < limiteMax)
        {
            printf("Indique un numero:");
            scanf("%d", &num);
            sumNum += num;
        }
    }
    printf("Sumatoria de numeros es:%d ", sumNum);

    system("pause");
}