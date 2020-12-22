/* Vamos a detectar que un numero sea capicua */
#include <stdio.h>
#include <string.h>

int main()
{
    int num, i, aux, resto, numInv = 0;
    printf("Introduzca el numero:");
    scanf("%d", &num);
    aux = num;
    while (aux > 0)
    {
        resto = aux % 10;
        aux = aux / 10;
        numInv = numInv * 10 + resto;
    }
    if (numInv == num)
    {
        printf("Numero es capicua\n");
    }
    else
    {
         printf("Numero no es capicua\n");
    }
    system("pause");
}