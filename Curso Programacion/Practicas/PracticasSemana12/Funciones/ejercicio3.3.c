/* Vamos a crear un programa que a través de funciones
 me devuelva el restultado de elevar un numero a otro. 
Nota: no utilizaremos funciones de la libreria math.h
Las funciones creadas, no deben hacer ningún printf */
#include <stdio.h>
#include <string.h>
#include <math.h>
 
int elevation(int,int);

int main (){
    int var1=4,var2=4;
    printf("%d",elevation(var1,var2)) ;

    system("pause");
}
int elevation(int num1,int num2){
    int i,total=1;
    
    for ( i = 0; i < num2; i++)
    {
        total*=num1;
    }
    return total;
}