/* Son bisiestos los años que cumplen: ser multiplos de 4
Excepto los que son multiplos de 100 pero no de 400
Vamos a crear un programa al que le introduzcamos un 
año por teclado y me devuelva si es un año bisiesto o no lo es */

#include <stdio.h>

int main (){
    int fecha;

    printf("Indique la fecha: ");
    scanf("%d",&fecha);

    if (fecha%4==0 || fecha%400==0 && fecha%100==0)
    {
        printf("\nEs bisiesto");
    }
    else
    {
        printf("\nNo es bisiesto");
    }

    system("pause");
}