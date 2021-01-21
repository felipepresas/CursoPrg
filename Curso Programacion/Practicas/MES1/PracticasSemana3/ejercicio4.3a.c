/* Vamos a crear un programa que reciba por teclado 
un numero comprendido entre el 1 y el 10 y nos devuelva por pantalla su equivalente en letras
A) If's
de 53173186S_OrtoVazquez Souto a todos:    12:53 PM
B) Switch
Introduce un numero entre 1 y 10
->7
Has introducido el numero "siete" */
#include<stdio.h>
int main (){
    int numero;

printf("Indique el numero del 1 al 10 :");
scanf("%d",&numero);
    
    if (numero<1 || numero>10){
    printf("\nEl numero no se encuentra valorado entre las opciones\n");
    }
    else if (numero==1){
        printf("\nTu numero es UNO\n");
    }
    else if (numero==2)
    {
        printf("\nTu numero es DOS\n");  
    }
    else if (numero==3){
        printf("\nTu numero es TRES\n");
    }
    else if (numero==4)
    {
        printf("\nTu numero es Cuatro\n"); 
    }
    else if (numero==5){
        printf("\nTu numero es CINCO\n");
    }
    else if (numero==6){
        printf("\nTu numero es SEIS\n");
    }
    else if (numero==7){
        printf("\nTu numero es SIETE\n");
    }
    else if (numero==8){
        printf("\nTu numero es OCHO\n");
    }
    else if (numero==9){
        printf("\nTu numero es NUEVE\n");
    }
    else {
        printf("\nTu numero es DIEZ\n");
    }
    
 system("pause");   
}
