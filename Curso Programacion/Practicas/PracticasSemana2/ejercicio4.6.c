/* Vamos a crear un programa en C que pida el nombre, los apellidos y la edad de 5 de 5 alumnXs de clase
Mostramos toda la información y calculamos la media de edad de la clase */
#include <stdio.h>
    int main (){
        const int cad=100;
        char nombre[cad],nombre2[cad],nombre3[cad],nombre4[cad],nombre5[cad];
        int edad1,edad2,edad3,edad4,edad5;
    
printf("Indica el nombre y apellido:");
gets(nombre);
printf("Indica la edad %s: ",nombre);
scanf("%d",&edad1);

fflush(stdin);
printf("Indica el nombre y apellido:");
gets(nombre2);
printf("Indica la edad %s: ",nombre2);
scanf("%d",&edad2);

fflush(stdin);
printf("Indica el nombre y apellido:");
gets(nombre3);
printf("Indica la edad %s: ",nombre3);
scanf("%d",&edad3);

fflush(stdin);
printf("Indica el nombre y apellido:");
gets(nombre4);
printf("Indica la edad %s: ",nombre4);
scanf("%d",&edad4);

fflush(stdin);
printf("Indica el nombre y apellido:");
gets(nombre5);
printf("Indica la edad %s: ",nombre5);
scanf("%d",&edad5);

printf("\nLos nombre y edad son:\n %s,%d \n %s,%d \n %s,%d \n %s,%d \n %s,%d",nombre,edad1,nombre2,edad2,nombre3,edad3,nombre4,edad4,nombre5,edad5);
printf("\nLa media de la en dad es%.2f\n",(edad1+edad2+edad3+edad4+edad5)/5.0);

system("pause");

}