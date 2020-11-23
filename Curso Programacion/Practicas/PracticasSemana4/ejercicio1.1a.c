#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Introduzca numero1: ");
    scanf("%d", &num1);
    printf("Introduzca numero2: ");
    scanf("%d", &num2);
    printf("Introduzca numero3: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("\nEl numero mayor es :%d ", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("\nEl numero mayor es :%d ", num2);
    }
    else
    {
        printf("\nEl numero mayor es :%d ", num3);
    }
    if (num1 < num2 && num1 < num3)
    {
        printf("\nEl numero menor es :%d ", num1);
    }
    else if (num2 < num1 && num2 < num3)
    {
        printf("\nEl numero menor es :%d ", num2);
    }
    else
    {
        printf("\nEl numero menor es :%d ", num3);
    }
    

    system("pause");
}