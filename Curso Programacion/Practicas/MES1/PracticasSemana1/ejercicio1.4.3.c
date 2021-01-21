# include <stdio.h>

int main (){
    float precio, desc;
    char art1,art2,art3;
    printf("\n Indicar precio articulo 1: ");
    scanf("%f",&precio);
    // getchar() 
    fflush(stdin);
    printf("Su inicial:");
    scanf("%c",&art1);
    printf("\n Introducir el descuento %: ");
    scanf("%f",&desc);
    printf("\n El precio articulo 1 %.2f y su inicial %c el descuento %.2f \n",precio,art1,desc);
    printf("\n Precio final es: %.2f \n",(precio-(precio*desc)/100));

    printf("\n Indicar precio articulo 2 : ");
    scanf("%f",&precio);
    fflush(stdin);
    printf("Su inicial:");
    scanf("%c",&art2);
    printf("\n Introducir el descuento %: ");
    scanf("%f",&desc);
    printf("\n El precio articulo 2 %.2f su inicial %c y el descuento %.2f \n",precio,art2,desc);
    printf("\n Precio final es: %.2f \n",(precio-(precio*desc)/100));

    printf("\n Indicar precio articulo 3 : ");
    scanf("%f",&precio);
    fflush(stdin);
    printf("Su inicial:");
    scanf("%c",&art3);
    printf("\n Introducir el descuento %: ");
    scanf("%f",&desc);
    printf("\n El precio articulo 3 %.2f su inicial %c y el descuento %.2f \n",precio,art3,desc);
    printf("\n Precio final es: %.2f \n",(precio-(precio*desc)/100));
}
