/* Escriba un programa para jugar a adivinar un número 
(el numero se guardará en una variable). El programa 
empieza pidiendo entre qué números está el número a 
adivinar, y después el usuario va probando valores y 
el programa va diciendo si son demasiado grandes o pequeños.
Al finalizar, el programa me dirá cuantos intentos 
hemos empleado para adivinar el numero */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int auxRes, numProbar = 0, numInt = 0;
    srand(time(NULL));
    int num = rand() % 100;

    printf("El numero de la loteria se encuentra entre 0-100\n");
    printf("Intenta adivinar solo tienes 8 intentos\n");

    while (numProbar != num && numInt<=8)
    {
        printf("Indica un numero\n");
        scanf("%d", &numProbar);

        if (numProbar > num)
        {
            printf("El numero es mayor al que buscas\n");
        }
        else if (numProbar == num)
        {
            printf("Exito juegate la primitiva\n");
        }
        else if (numProbar < num)
        {
            printf("El numero es menor al que buscas\n");
        }
        else
        {
            printf("El numero no esta dentro del Rango indicado, tienes un intento menos\n");
        }
        numInt++;
    }
    printf("Tu numero de intentos es : %d \n", numInt);
    printf("El numero ganador es : %d \n", num);

    system("pause");
}