/* Vamos a crear un programa en C que me pida X numeros por pantalla
(x vendrá definido previamente como una constante de programa)
Y me diga: cual es el mayor, cual es el menor, y que posiciones ocupan */
#include <stdio.h>
int main()
{
    int i, j, num[4], min, max = num[0], posMin, posMax;
    for (i = 0; i <= 4; i++)
    {
        printf("Indique los numeros:");
        scanf("%d", &num[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        if (num[i] >= max)
        {
            max = num[i];
            posMax = i;
        }
    }
    printf("Numero maximo es:%d posicion%d \n", max,posMax);
    for (min = num[0], i = 0; i <= 4; i++)
    {
        if (num[i] <= min)
        {
            min = num[i];
            posMin = i;
        }
    }
    printf("Numero minimo es:%d posicion %d \n", min,posMin);
    system("pause");
}