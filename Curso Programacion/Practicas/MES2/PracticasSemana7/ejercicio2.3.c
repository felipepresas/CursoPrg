/* Vamos a crear un programa que muestre
 los numeros pares en pantalla los numeros del 0 al 50 */
#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i <= 50; i++)
    {
        printf("numero:%d \n", i);
        i++;
    }
    getchar();
}