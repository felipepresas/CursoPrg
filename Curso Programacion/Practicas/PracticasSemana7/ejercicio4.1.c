/* Vamos a crear un programa en C que pida al usuario 2 años
La finalidad es saber cuantos años bisiestos hay entre esas dos fechas
¿Cuándo un año es bisiesto?
Un año bisiesto debe ser divisible por 4 y no ser divisible 
por 100 y divisible por 400 */
#include <stdio.h>
int main()
{
    int i, num1, num2, countBisiesto=0;
    printf("Indique la primer fecha: ");
    scanf("%d", &num1);
    printf("Indique la segunda fecha: ");
    scanf("%d", &num2);

    for (i = num1; i <= num2; i++)
    {
        if (i%4==0 || i%100==0 && i%400==0)
        {
            countBisiesto++;
        }
    }
    printf("Cantidad de bisiestos es: %d \n", countBisiesto);
    system("pause");
}