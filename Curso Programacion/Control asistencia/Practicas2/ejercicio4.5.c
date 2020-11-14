/* Se pedirá el nombre del artículo y su valor
El resultado a mostrar es algo del tipo:
 "El articulo arroz (a) cuesta: 2.47 euros"
 B) Introducimos un segundo artículo y 
 mostramos algo del tipo: 
 El articulo arroz (a) cuesta 2.47 euros y el 
 articulo pasta (p) cuesta 2.14 euros. El total 
 de la compra es: 3.61 euros
 C) El mismo ejercicio que B pero que la
inicial de artícula la muestre en mayusculas
EN NINGUN MOMENTO PEDIMOS LA INICIAL DEL ARTÍCULO. 
LA TENEMOS QUE CONSEGUIR A PARTIR DE SU NOMBRE */
#include <stdio.h>

int main (){
    char art1[15],art2[15];
    float precio1,precio2;

    // Parte a

    printf("Indicar articulo: ");
    gets(art1);
    // gets capturar strings
    // fgets
    // scand (%[^\n]s)
    printf("\nIndicar precio: ");
    scanf("%f",&precio1);

    printf("\nEl articulo es %s su inicial es %c y su precio %.2f",art1,art1[0],precio1);

    // Parte B
    fflush(stdin);

    printf("\nIndicar articulo: ");
    gets(art2);
    printf("\nIndicar precio: ");
    scanf("%f",&precio2);

    printf("\nEl articulo %s cuesta %2.f euros y el articulo %s cuesta %2.f. ",art1,precio1,art2,precio2);
    printf("El total de la compra es: %2.f",precio1+precio2);
    // Parte c

    printf("\nEl articulo %s(%c) cuesta %2.f euros y el articulo %s(%c) cuesta %2.f. El total de la compra es: %2.f \n",art1,toupper(art1[0]),precio1,art2,toupper(art2[0]),precio2,precio1+precio2);
    

    system("pause");

}
