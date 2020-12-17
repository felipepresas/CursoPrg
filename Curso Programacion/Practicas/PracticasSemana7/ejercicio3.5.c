/* Escribir un programa que permita al usuario 
ingresar 6 números enteros, que pueden ser 
positivos o negativos. Al finalizar, mostrar 
la sumatoria de los números negativos y el 
promedio de los positivos. */

#include <stdio.h>
int main (){
    int i,num[6],sumNegativos=0,cont=0;
    float sumPositivos=0;
    for ( i = 0; i < 6; i++)
    {
          printf("Indique 6 numeros enteros: ");
          scanf("%d",&num[i]);
          if (num[i]<=0)
          {
              sumNegativos+=num[i];
          }
          else
          {
              sumPositivos+=num[i];
              cont++;
          }
    }
    printf("Sumatoria de numeros negativos es: %d \n",sumNegativos);
    printf("Promedio de los positivos es: %.2f \n",sumPositivos/cont*1.0);
    system("pause");
}