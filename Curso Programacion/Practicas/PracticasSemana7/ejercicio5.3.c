/* Vamos a crear un programa en C que recoja un 
numero (será la cantidad de numeros a introducir)
Rellene un array con esa cantidad de numeros 
Y calcule y muestre la media de los numeros 
que están en posiciones pares del array*/
#include <stdio.h>
int main()
{
    int i, cantnum, cont = 0, sumPares = 0;
    printf("Indicar cantidad de numero: ");
    scanf("%d", &cantnum);
    int numeros[cantnum];
    for (i = 0; i < cantnum; i++)
    {
        printf("Indique el valor: ");
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < cantnum; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            sumPares += numeros[i];
            cont++;
        }
    }
    printf("La media de los numero pares es:%d\n", sumPares / cont);
    system("pause");
}