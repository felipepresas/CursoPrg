/* Vamos a crear un programa en C llamado primitiva
La invocacion al programa sera del tipo
primitiva 8 9 12 15 31 45 0
6 numeros + reintegro
El programa debe comprobar esa combinación con la combinacion ganadora y decirme el premio que obtengo
El reintegro devuelve lo jugado
2 o menos aciertos no me da nada
A partir de 3 tengo premio
El premio max es 6 aciertos + reintegro
Limitaciones
los 6 primeros numeros solo pueden ser entre el 0 y el 49
El reintegro entre el 0 y el 9
El ultimo numero introducido debe ser el reintegro
La combinacion ganadora la podeis poner como una constante o la podeis obtener a traves de la funcion RANDOM
Otra restriccion es que los 6 primeros numeros no pueden repetirse */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int numLot();
int numReint();

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int num[6];
    int lotConv[7];
    int numReintegro, i;
    int contNumeroGanador = 0, compruebaAciertos = 0, compruebaReintegro = 0;

    if (argc != 8)
    {
        printf("Debe introducir 7 parametros");
    }
    else
    {
        printf("Tu numero de la loteria es:%s %s %s %s %s %s %s", argv[1], argv[2], argv[3], argv[4], argv[5], argv[6], argv[7]);

        for (i = 0; i < 6; i++)
        {
            num[i] = numLot();
            lotConv[i] = atoi(argv[i + 1]);
        }
        numReintegro = numReint();
        lotConv[6] = atoi(argv[7]);

        while (contNumeroGanador != 1)
        {
            if (num[0] != num[1] && num[1] != num[2] && num[2] != num[3] && num[3] != num[4] && num[4] != num[5])
            {
                printf("\nEl numero de la loteria es : %d %d %d %d %d %d %d \n", num[0], num[1], num[2], num[3], num[4], num[5], numReintegro);
                contNumeroGanador++;
            }
            else
            {
                num[0] = numLot(), num[1] = numLot(), num[2] = numLot(), num[3] = numLot(), num[4] = numLot(), num[5] = numLot();
            }
        }
        for (i = 0; i < 6; i++)
        {
            if (lotConv[i] == num[0])
            {
                compruebaAciertos++;
            }
        }
        if (lotConv[6] == numReintegro)
        {
            compruebaReintegro++;
        }
        if (compruebaAciertos==6&&compruebaReintegro==1)
        {
            printf("Ganaste la Loteria\n");
        }
        else if (compruebaAciertos<3&&compruebaReintegro==1)
        {
             printf("Reintegro devuelve lo jugado\n");
        }
        else if (compruebaAciertos>=3&&compruebaReintegro==1)
        {
             printf("Reintegro devuelve lo jugado\n");
        }
        else
        {
             printf("No tienes premio\n");
        }
    }
    printf("\n%d aciertos\n", compruebaAciertos);
    printf("\n%d reintegro\n", compruebaReintegro);

    system("pause");
}

int numLot()
{
    int loteria;
    loteria = rand() % (50);
    return loteria;
}
int numReint()
{
    int reintegro;
    reintegro = rand() % (10);
    return reintegro;
}
