/* Vamos a crear un programa en C que
1) Pida la cantidad de numeros que queremos introducir
2) Me pida introducir todos esos numeros y almacene
3) Si hemos introducido el numero 0 en alguna posicion, cambiarlo 
por un -1 e indicar que posicion ha sido modificada y
 cuantas veces se ha encontrado el valor -1 */
#include <stdio.h>
int main()
{
    int i, j, cant, contZero = 0;
    printf("indique la cantidad: ");
    scanf("%d", &cant);
    int cadenaNumeros[cant];

    for (j = 0; j < cant; j++)
    {
        printf("Indique el %d numero : ", j + 1);
        scanf("%d", &cadenaNumeros[j]);
    }
    for (i = 0; i < cant; i++)
    {
        if (cadenaNumeros[i] == 0)
        {
            cadenaNumeros[i] = -1;
            printf("Posicion del 0: %d", i);
            contZero++;
        }
        printf("Numeros es:%d\n", cadenaNumeros[i]);
    }
    printf("Cantidad de ceros es: %d \n", contZero);
    system("pause");
}