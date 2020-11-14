#include <stdio.h>
#include <math.h>
int main (){
    int a,b,c;
    float cuadrado, cuadruple,resta, raiz,r1 ,r2;
    printf("Introduce el valor a:");
    scanf("%d",&a);    
    printf("Introduce el valor b:");
    scanf("%d",&b);    
    printf("Introduce el valor c:");
    scanf("%d",&c);    

    printf("Los valores introducido son: %d , %d, %d ",a,b,c);

    cuadrado=b*b;
    cuadruple=4*a*c;
    resta=cuadrado-cuadruple;

    printf("\n El cuadrado es: %.2f , El resultado de cuadruple es:%.2f , El resultado resta es %.2f",cuadrado,cuadruple,resta);

    raiz= sqrt(resta);

    printf("\n El resultado es:%.2f ",raiz);

    r1=(-b+raiz)/2*a;
    r2=(-b-raiz)/2*a;

    
    printf("Una solucion es %.2f", r1);
    printf("La otra solucion es %.2f", r2);
}