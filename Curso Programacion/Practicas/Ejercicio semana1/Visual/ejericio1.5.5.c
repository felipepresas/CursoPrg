# include <stdio.h>

int main (){
    float precio, desc;
    printf("\n Indicar precio articulo 1:");
    scanf("%f",&precio);
    printf("\n Introducir el descuento %: ");
    scanf("%f",&desc);
    printf("\n El precio articulo 1 %.2f y el descuento %.2f \n",precio,desc);
    printf("\n Precio final es: %.2f \n",(precio-(precio*desc)/100));

    printf("\n Indicar precio articulo 2:");
    scanf("%f",&precio);
    printf("\n Introducir el descuento %: ");
    scanf("%f",&desc);
    printf("\n El precio articulo 2 %.2f y el descuento %.2f \n",precio,desc);
    printf("\n Precio final es: %.2f \n",(precio-(precio*desc)/100));

    printf("\n Indicar precio articulo 3:");
    scanf("%f",&precio);
    printf("\n Introducir el descuento %: ");
    scanf("%f",&desc);
    printf("\n El precio articulo 3 %.2f y el descuento %.2f \n",precio,desc);
    printf("\n Precio final es: %.2f \n",(precio-(precio*desc)/100));
}