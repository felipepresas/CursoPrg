/* Vamos a crear una funcion que permita recibir
un numero entero. La funcion recibirá como 
parámetros de entrada el numero máximo y el numero minimo a introducir
Y para que se va a utilizar dicha funcion
Como salida, retornará el propio numero entero
Introduce un numero enero (entre 0-100): */

#include <stdio.h>
#include <string.h>

int pedirEntero(int, int, char*);

int main()
{
 
    int max;
    int min;
    pedirEntero(min ,max ,"Edad");
    
    system("pause");
} 

int pedirEntero (int min, int max,char*finalidad)
{
    int num =-10000000;
    printf(" indique un valor minimo\n");
    scanf("%d",&min);
    
    printf(" indique un valor maximo\n");
    scanf("%d",&max);
    
    while ((!num >= min) && (!num <= max))
    {
        if ((num >= min) || (num <= max))
        {
            printf("[%s]Indique un valor entre %d - %d \n",finalidad, min, max);
            scanf("%d",&num);    
        }
        else
        {
            printf("Error en el dato \n");
            printf("[%s]Indique un valor entre %d - %d \n",finalidad, min, max);
            scanf("%d",&num); 
        }
    }
    return num;
}
