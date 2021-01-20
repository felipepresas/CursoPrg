/* Vamos a crear una funcion que reciba 2 numeros y me devuelva el mayor de ellos. 
A través de la misma función (sin hacer ningún printf dentro de ella) debo determinar cual es el menor */

#include <stdio.h>
#include <string.h>
int mayorDeDos (int, int);
int peticionDato();
void laRespuesta();


int main (){
    int num1 =0, num2 =0;
    num1 = peticionDato();
    num2 = peticionDato();

    printf("El mayor  es %d",mayorDeDos(num1,num2));

    laRespuesta();
    
    system("pause");
}
int peticionDato()
{
    int num;
    printf("indque un numero");
    scanf("%d", &num);
    return num;
}

int mayorDeDos (int num1, int num2) {
    if (num1> num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
void laRespuesta(){
    printf("\nEl menor es el otro\n");
}