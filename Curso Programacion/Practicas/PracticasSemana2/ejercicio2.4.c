/* Vamos a simular el funcionamiento de una máquina expendedora
de refrescos que nos diga cuántas monedas de cada tipo debe 
devolver. La máquina acepta monedas de 50, 20, 10 y 5 centimos */

#include <stdio.h>

int main (){

    float dinero; 
    int precioVenta=0.68, vuelta;

    printf("Inserte el dinero: ");
    scanf("%f",&dinero);
    vuelta=(dinero-precioVenta)*100;

    printf("\nLa vuelta es:%.2f",vuelta);
    printf("\nLa vuelta es:%.2f",(vuelta / 50));

    printf("\nLa vuelta es:%.2f",vuelta);
    printf("\nLa vuelta es:%.2f",(vuelta / 20));
    
   
    system("pause");
}