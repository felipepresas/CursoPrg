/* Vamos a crear un programa que me permita sumar todos 
los numeros IMPARES entre el 2 y el 50
Cuando lo tengamos creado, haremos uno genérico que calcule dicha 
suma entre dos rangos introducidos por teclado */
#include <stdio.h>
int main()
{
    int i, num1, num2, sumParImpar = 0, menu;
    printf("\n\n\t\t\tIndique el valor del rango1: ");
    scanf("%d", &num1);
    printf("\t\t\tIndique el valor del rango2: ");
    scanf("%d", &num2);
    if (num1 < num2)
    {
        printf("\n\n\n\t\t\t\t\t\tOpciones del menu\n");
        printf("\n\n\t\t\tSi decea sumar impares pulse 1\n\n\t\t\tSi decea contar pares pulse 2\n\n\n");
        scanf("%d", &menu);
        system("cls");
        switch (menu)
        {
        case 1:
            for (i = num1; i <= num2; i++)
            {
                if (i % 2 != 0)
                {
                    printf("\t\t\tEl numero es impar:%d\n", i);
                    sumParImpar += i;
                }
            }
            printf("\n\t\t\tSuma de impares es:%d \n\n\n", sumParImpar);
            break;
        case 2:
            for (i = num1; i <= num2; i++)
            {
                if (i % 2 == 0)
                {
                    printf("\t\t\tEl numero es par:%d\n", i);
                    sumParImpar += i;
                }
            }
            printf("\n\t\t\tSuma de pares es:%d \n\n\n", sumParImpar);
        default:
            printf("\t\t\t\n\nNo se encuentra dentro del menu");
            break;
        }
    }
    else
    {
        printf("\t\t\tEl rango 2 es menor al primero no se puede ejecutar\n\n");
    }
    system("pause");
}