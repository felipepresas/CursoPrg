/* Vamos a crear un programa en C que nos permita ordenar 
de menor a mayor un array de numeros
La salida del programa será el array inicial y el array ordenado
Ejemplo
ArrayInicial: 2,7,4,6,0
ArrayOrdenado:0,2,4,6,7 */

#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, j = 1, q = 0, cantNum;
    printf("Cuantos numeros a ordenar: ");
    scanf("%d", &cantNum);
    int cadNum[cantNum], cadOrd[sizeof(cadNum)];
    while (i != cantNum)
    {
        printf("indique numero ordenar: ");
        scanf("%d", &cadNum[i]);
        //printf("cadena posicion %d numero es: %d\n", i, cadNum[i]);
        i++;
    }
    i = 0;
    cadOrd[0] = cadNum[0];
    cadOrd[1]=0;
    cadOrd[2]=0;
    cadOrd[3]=0;
    cadOrd[4]=0;
    while (i < cantNum-1)
    {
        while (j < cantNum)
        {
            if (cadOrd[i] < cadNum[j])
            {
                
                cadOrd[i] = cadNum[j];
                
            }
            j++;
            j=i+1;
        }
        i++;
    }
    while (q != cantNum)
    {
        printf("\nCadena posicion %d numero es: %d\n", q + 1, cadOrd[q]);
        q++;
    }

    system("pause");
}