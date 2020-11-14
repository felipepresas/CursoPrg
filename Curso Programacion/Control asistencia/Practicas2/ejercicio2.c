/* Vamos a crear un programa en C que nos pida nuestra inicial
y nuestra edad; lo mismo con la inicial y la edad de nuestra
pareja.
El programa debe mostrar un mensaje final en una nueva
pantalla diciendo cual es la inicial de cada uno, cual es
su edad y cual es la media de ambas edades */
#include <stdio.h>
int main (){

    char inic1,inic2;
    int edad1,edad2;

printf("Indica tu Inicial: ");
scanf("%c",&inic1);

printf("\nIndica tu edad: ");
scanf("%d",&edad1);

fflush(stdin);

printf("\nIndica tu Inicial: ");
scanf("%c",&inic2);

printf("\nIndica tu edad: ");
scanf("%d",&edad2);


printf("\nSus iniciales son %c y %c sus edades %d y %d\n",inic1,inic2,edad1,edad2);
printf("La media de su edad es %.2f\n",(edad1+edad2)/2.0);

system("pause");
}