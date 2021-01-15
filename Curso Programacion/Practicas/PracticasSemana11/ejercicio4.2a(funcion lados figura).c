/* Vamos a desarrollar un programa que permita obtener el area 
y el perimetro de una figura de 4 lados
Nos debe decir tambien si la figura es un cuadrado o un rectangulo */

#include <stdio.h>
#include <string.h>

float perimetro(float, float);
float area(float, float);

int main()
{
    float catetoA, catetoB;

    printf("Indique valor catetoA");
    scanf("%f", &catetoA);
    printf("Indique valor catetoB");
    scanf("%f", &catetoB);

    if (catetoA == catetoB)
    {
        printf("Es un cuadrado\n");
    }
    else
    {
        printf("Es un rectangulo\n");
    }
    printf("El perimetro es: %.2f\n", perimetro(catetoA, catetoB));
    printf("El area es: %.2f\n", area(catetoA, catetoB));
    system("pause");
}

float perimetro(float catetoA, float catetoB)
{
    float perimetroFig;
    perimetroFig = (catetoA * 2 + catetoB * 2);
    return (perimetroFig);
}
float area(float catetoA, float catetoB)
{
    float areaFig;
    areaFig = catetoA * catetoB;
    return (areaFig);
}