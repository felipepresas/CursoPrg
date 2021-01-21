/* Vamos a crear un programa que me permita sumar todos 
los numeros IMPARES entre el 2 y el 50
Cuando lo tengamos creado, haremos uno genérico que calcule dicha 
suma entre dos rangos introducidos por teclado */
#include <stdio.h>
int main (){
    int i ;
    for ( i = 2; i <= 50; i++)
    {
        if (i%2!=0)
        {
            printf("El numero es impar:%d\n",i);   
        }
    }
    system("pause");
}