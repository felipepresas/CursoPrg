/* Vamos a crear un programa en C que:
1) pida un numero que será la cantidad de numeros a introducir
2) Nos pida todos los numeros y los almacene
3) Nos muestre un menu que permita enseñar: a) Numeros pares b) numeros impares
 c) suma negativos d) promedio positivos */
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, cantNumeros, sumNegativos=0, contPromedio=0;
    float sumPositivos=0;
    char menu;
    printf("Indique la cantidad de numeros: ");
    scanf("%d", &cantNumeros);
    int cadenaNumeros[cantNumeros];
    for (i = 0; i < cantNumeros; i++)
    {
        printf("Indique un %i valor: ", i + 1);
        scanf("%d", &cadenaNumeros[i]);
    }
    printf("Seleccione una opcion del menu:\n");
    printf("a) Numeros pares\n");
    printf("b) numeros impares\n");
    printf("c) suma negativos\n");
    printf("d) promedio positivos\n");
    fflush(stdin);
    scanf("%c", &menu);
    if (tolower(menu) == 'a')
    {
        for (j = 0; j <= cantNumeros; j++)
        {
            if (cadenaNumeros[j] % 2 == 0)
            {
                printf("es un numero par: %d\n", cadenaNumeros[j]);
            }
        }
    }
    else if (tolower(menu) == 'b')
    {
        for (j = 0; j <= cantNumeros; j++)
        {
            if (cadenaNumeros[j] % 2 != 0)
            {
                printf("es un numero impar: %d\n", cadenaNumeros[j]);
            }
        }
    }
    else if (tolower(menu) == 'c')
    {
        for (j = 0; j <= cantNumeros; j++)
        {
            if (cadenaNumeros[j] <= 0)
            {
                sumNegativos += cadenaNumeros[j];
            }
        }
        printf("Sumatoria de numeros negativos es: %d \n", sumNegativos);
    }
    else if (tolower(menu) == 'd')
    {
        for (j = 0; j <= cantNumeros; j++)
        {
            if (cadenaNumeros[j] > 0)
            {
                sumPositivos += cadenaNumeros[j];
                contPromedio++;
            }
        }
        printf("Promedio de los positivos es: %.2f \n", sumPositivos / contPromedio * 1.0);
    }
    system("pause");
}