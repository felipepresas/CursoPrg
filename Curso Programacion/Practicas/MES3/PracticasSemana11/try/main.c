/* Vamos a desarrollar un programa que permita obtener el area 
y el perimetro de una figura de 4 lados
Nos debe decir tambien si la figura es un cuadrado o un rectangulo */

#include <stdio.h>
#include <string.h>
#include "lib.h"

int main()
{   /
    float lado1, lado2;
    lado1 =peticion_datos1();
    lado2= peticion_datos2();

    if (peticion_datos1 == peticion_datos2)
    {
        printf("Es un cuadrado\n");
    }
    else
    {
        printf("Es un rectangulo\n");
    }
    printf("El perimetro es: %.2f\n", perimetro(lado1, lado2));
    printf("El area es: %.2f\n", area(lado1, lado2));
    system("pause");
}