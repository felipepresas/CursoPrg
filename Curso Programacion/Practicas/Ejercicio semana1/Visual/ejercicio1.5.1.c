#include <stdio.h>

int main (){
    float base, altura;

    printf("Indique longitud de los lados de un rectangulo");
    printf("\nBase: ");
    scanf ("%f",&base);
    printf("\nAltura: ");
    scanf ("%f",&altura);
    system("cls");
    printf("\nEl area es:%.2f",base*altura);
    printf("\nEl perimetro es:%.2f",(base*2)+(altura*2));
}
