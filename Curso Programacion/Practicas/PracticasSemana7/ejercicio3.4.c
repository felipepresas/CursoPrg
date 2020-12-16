/* Crear un programa en C que introducido un numero, calcule su factorial
Pej: el factorial de 5 es: 5x4x3x2x1 */
#include <stdio.h>
int main()
{
    int i, j, num1, factorial = 0;
    printf("Introduzca un numero:");
    scanf("%d", &num1);
    for (factorial += num1, i = num1 - 1; i > 0; i--)
    {
        factorial = factorial * i;
    }
    printf("Factorial es:%d\n", factorial);
    system("pause");
}