/* Vamos a crear un programa en C que a partir de un numero
 introducido por teclado nos muestre todos los multiplos 
de 2 desde 0 hasta ese numero
Por ejemplo
Introduzco por teclado el 12
Los multiplos de 2 desde el 0 hasta el 12 son: 2, 4, 8, */
#include <stdio.h>
int main()
{
    int i, numero, contadormultiplos = 0;
    printf("Indique el numero");
    scanf("%d", &numero);
    for (size_t i = 0; i <= numero; i++)
    {
        if (i % 2 == 0)
        {
            contadormultiplos++;
            printf("%d\n", i);
        }
    }
    printf("cantidad de multiplos%d-  %d/n", contadormultiplos, numero);
    system("pause");
}