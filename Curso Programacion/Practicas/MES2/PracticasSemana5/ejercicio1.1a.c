/* Vamos a realizar un programa en C que me permita calcular
el precio de los diferentes tipos de helado mcFlurry
Oreo, kitkat, lacasitos, brownie */

#include <stdio.h>
int main()
{
    int menu;
    printf("Indicar el tipo de helado que quieres:");
    printf("1.-Oreo\n2.-Kitkat\n3.-lacasitos\n4.brownie\n");
    scanf("%d", &menu);
    system("cls");
    if (menu = 1)
    {
        printf("El helado que quieres es Oreo cuesta 2.1$\n");
    }
    else if (menu = 2)
    {
        printf("El helado que quieres es kitkat cuesta 2$\n");
    }
    else if (menu = 3)
    {
        printf("El helado que quieres es lacasitos cuesta 2.4$\n");
    }
    else if (menu = 4)
    {
        printf("El helado que quieres es brownie cuesta 2.3$\n");
    }
    else
    {
        printf("Error de codigo\n");
    }
    system("pause");
}