/* Vamos a crear un programa en C
que pida dos numeros positivos (limite inferior y limite superior) y
determine la cantidad de numero pares que hay */

#include <stdio.h>
#include <string.h>
int main()
{
    int min, max, i, aux,cuentapares;
    char cad1[50], cad2[50];
    printf("Indique dos numeros positivos (limite inferior):");
    scanf("%d", &min);
    printf("Indique dos numeros positivos (limite superior):");
    scanf("%d", &max);
    if (min<0 || max<0)
    {
        printf("Has introducido un numero negativo:\n");
    }
    else if (min > max)
    {
        aux = max;
        max = min;
        min = aux;
    }
    for ( i = min; i < max; i++)
    {
       if(i%2==0)
       cuentapares++;
    }
    printf("Cuenta pares%d",cuentapares);
    system("pause");
}