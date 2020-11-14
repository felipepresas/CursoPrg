#include <stdio.h>
// #include <math.h>

int main (){
    const pi=3.1416;
    float radio;

    printf ("Introducir el radio:");
    scanf("%f",&radio);

    printf ("\n Perimetro de la circunferencia: %.2f",2*pi*radio);
    printf ("\n El area del circulo es : %.2f",pi*(radio*radio));
    printf ("\n El el volumen de la esfera es: %.2f",4*pi*(radio*radio*radio));
}
