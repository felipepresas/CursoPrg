/* Vamos a crear un programa en C que nos permita,
 a través de funciones, calcular si un numero es primo */

#include <stdio.h>
#include <string.h>
int primos(int);
int peticion_datos();

int main()
{
    int num = 0, primo = 0;
    num = peticion_datos();
    primo = esPrimo(num);
    if (primo==2)
    printf("Primo:")
    system("pause");
}

int peticion_datos()
{
    int numero;
    printf("Introduce un numero:");
    scanf("%d", &numero);
    return numero;
}
int esPrimo()
{
    int i = 0, cant = 0;
    for (i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            cant++;
        }
    }
    return cant;
}