# include <stdio.h>

int main (){
    float precio, desc, precio1, desc1,precio2, desc2;
    printf("Indicar precio articulo 1:");
    scanf("%f",&precio);
    printf("\nIntroducir el descuento %: ");
    scanf("%f",&desc);
     printf("Indicar precio articulo 2:");
    scanf("%f",&precio1);
    printf("\nIntroducir el descuento %: ");
    scanf("%f",&desc1);
     printf("Indicar precio articulo 3:");
    scanf("%f",&precio2);
    printf("\nIntroducir el descuento %: ");
    scanf("%f",&desc2);
    printf("\n El precio articulo 1 %.2f y %.2f ",precio,desc);
    printf("\n Precio final es: %.2f ",(precio*desc)/100);
    printf("\n El precio articulo 2 %.2f y %.2f ",precio1,desc1);
    printf("\n Precio final es: %.2f ",(precio1*desc1)/100);
    printf("\n El precio articulo 3 %.2f y %.2f ",precio1,desc1);
    printf("\n Precio final es: %.2f ",(precio1*desc1)/100);
}
