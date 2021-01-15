/* Vamos a crear un programa en C que pida por teclado un numero cualquiera y
devuelva como resultado la suma de sus digitos
Por ejemplo, si introduzco el 23 me tiene que devolver 5 Pedimos numero Almacenamos numero
[suma de sus digitos]contardigitios( numero que he pasasdo) */

#include <stdio.h>
#include <string.h>

int sumatoria(int );

int main()
{
    
    int num1;
    printf("indique un numero:");
    scanf("%d", &num1);

    printf("La suma es %d\n", sumatoria(num1));
    system("pause");
}

int sumatoria(int num1)
{ 
    int i;
    int total=0;
    char cambio[10];
    itoa(num1,cambio,10);
    for (i = 0; cambio[i]!='\0' ; i++)
    {
        total += cambio[i]-0;
    }
    return total;

}