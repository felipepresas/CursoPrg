/* Escribir un programa que lea los valores de los catetos de un triángulo
rectángulo y calcule su hipotenusa, el área y el perímetro del triángulo */

// hipotenusa = raiz cuadrada de: cateto1 al cuadrado + cateto 2 al cuadrado
// Area=(cateto1*cateto2)/2
// perimetro=h+cateto1+cateto2

#include <stdio.h>
#include <math.h>

int main(){
    float catetoa, catetob,hipot,area, perimetro;

    printf("\n\t\t\t\t\tCalculos para un rectangulo\n");

    printf("\n\t\t\t\t\tIndique el valor del cateto a: ");
    scanf("%f",&catetoa);
    printf("\t\t\t\t\tIndique el valor del cateto b: ");
    scanf("%f",&catetob);

    hipot=sqrt( (pow(catetoa,2)+pow(catetob,2)));
    
    printf("\n\t\t\t\t\tLa hipotenusa es: %.2f",hipot);

    area=(catetoa*catetob)/2;

    printf("\n\t\t\t\t\tSu area es: %.2f",area);

    perimetro =hipot+catetoa+catetob;
    
    printf("\n\t\t\t\t\tEl perimetro es: %.2f\n",perimetro);
    
    system ("pause");
}