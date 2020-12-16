/* Realizar un programa que pida al usuario dos números y una 
letra: “i” ó “p”. El programa presentará los números pares 
(si se pulsó la “p”) ó impares (si se pulsó la “i”) que hay 
desde el primer número al segundo que introdujo el usuario. 
Si se pulsa alguna tecla distinta de “p” ó “i”, el programa 
no imprime ningún número. */
#include <stdio.h>
int main()
{
    int i, num1, num2;
    char letra;
    printf("Primer numero inferior:");
    scanf("%d", &num1);
    printf("Primer numero superior:");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf(" El numero inferior no puede ser mayor al superior");
    }
    else
    {
        printf("Pulse tecla p para contarpares\n");
        printf("Pulse tecla i para impares\n");
        fflush(stdin);
        scanf("%c",&letra);
        tolower(letra);
        if ('p' == letra)
        {
            for (i = num1; i <= num2; i++)
            {
                if (i % 2 == 0)
                {
                    printf("Numeros pares son: %d\n", i);
                }
            }
        }
        else if ('i' == letra)
        {
            for (i = num1; i <= num2; i++)
            if (i % 2 != 0)
            {
                printf("Numeros impares son: %d\n", i);
            }
        }
        else
        {
            printf("La opcion no esta dentro del menu\n");
        }
    }
    system("pause");
}