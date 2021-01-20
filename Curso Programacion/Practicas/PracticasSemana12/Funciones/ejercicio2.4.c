/* Vamos a crear un programa en C que nos devuelva la tabla de multiplicar de un numero concreto
El programa recibirá un numero como parametro, y devolvera la impresion de la tabla de multiplicar
A ver si con estas funciones mas sencillas somos capaces de entender perfectamente las funciones */

#include <stdio.h>
#include <string.h>

int peticionDato();
void tabla(int);

int main()
{
    tabla(peticionDato());

    system("pause");
}

int peticionDato()
{
    int num;
    printf("indque un numero");
    scanf("%d", &num);
    return num;
}

void tabla(int numero)
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf(" %d * %d = %d \n", i, numero, i * numero);
    }
}
