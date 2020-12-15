/* Vamos a crear un programa que muestre
 por pantalla los numeros del 0 al 50 */
#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i <= 50; i++)
    {
        printf("numero:%d \n", i);
    }
    getchar();
}