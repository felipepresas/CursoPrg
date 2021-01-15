#include "lib.h"

float peticion_datos1(){
    float lado1;
    printf("Introduce la base: ");
    scanf("%f",&lado1);
    return lado1;
}
float peticion_datos2(){
    float lado2;
    printf("Introduce la area: ");
    scanf("%f",&lado2);
    return lado2;
}

float perimetro(float lado1, float lado2)
{
    float perimetroFig;
    perimetroFig = (lado1 * 2 + lado2 * 2);
    return (perimetroFig);
}
float area(float lado1, float lado2)
{
    float areaFig;
    areaFig = lado1 * lado2;
    return (areaFig);
}