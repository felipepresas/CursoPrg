/* Vamos a crear una funcion en C que sea capaz de identificar los 
positivos y los negativos de una serie numerica introducida por teclado
Estaremos introduciendo datos hasta poner un 0
La funcion en cuestión gestionará todos los datos introducidos 
y me devolverá cuales son positivos y cuales negativos
Es decir, como parametro de entrada tendrá la serie numerica y 
como parametro de salida los positivos y los negativos
La cantidad de* */
#include <stdio.h>
#include <string.h>

int contadNum();
int peticionDatos();

int main()
{   
    int numero[100],i=0;;
    numero[i]=peticionDatos();
}

int contadNum()
{  
    int numero[100],i=0;
    int contPos=0,contNeg=0;
    if (numero[i]>=0)
    {
        contPos+=contPos;
    }
    else
    {
        contNeg+=contNeg;
    }
    return contPos;
    return contNeg;
    
}
int peticionDatos()
{
    
    int numero[100],i=0;
    while (numero!=0)
    {
        printf("Introduce un numero:");
        scanf("%d", &numero[i]);
        contadNum();
        return numero;
        i++;
    }
}