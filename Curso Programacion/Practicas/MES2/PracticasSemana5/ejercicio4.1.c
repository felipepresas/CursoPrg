/* Vamos a crear un ejercicio en C que pida nuestro nombre por teclado y, 
nos muestre caracter a caracter, cada una de las letras
Por ejemplo introduzco Orto y la salida sera
La primera letra es una O
La segunda letra es una r
La tercera letra es una t
La cuarta letra es una o */
#include <stdio.h>
#include <string.h>
int main()
{
    char nombre[30] = "";  //malloc  //realloc // funciones free
    printf("Indique su nombre\n");
    gets(nombre);

    if (nombre[0] != "\0")
    {
        printf("La primera letra es:%c\n", nombre[0]);
    }
    else
    {
        printf("final del nombre");
    }
    if (nombre[1] != "\0")
    {
        printf("La segunda letra es:%c\n", nombre[1]);
    }
    else
    {
        printf("final del nombre");
    }
    if (nombre[2] == "\0")
    {
        printf("La tercera letra es:%c\n", nombre[2]);
    }
    else
    {
        printf("final del nombre");
    }
    if (nombre[3] == "\0")
    {
        printf("La cuarta letra es:%c\n", nombre[3]);
    }
    else
    {
        printf("final del nombre");
    }
    if (nombre[4] == "\0")
    {
        printf("La quinta letra es:%c\n", nombre[4]);
    }
    else
    {
        printf("final del nombre");
    }
    if (nombre[5] == "\0")
    {
        printf("La sexta letra es:%c\n", nombre[5]);
    }
    else
    {
        printf("final del nombre");
    }
    if (nombre[6] == "\0")
    {
        printf("La septima letra es:%c\n", nombre[6]);
    }
    else
    {
        printf("final del nombre");
    }
    if (nombre[7] == "\0")
    {
        printf("La octava letra es:%c\n", nombre[7]);
    }
    else
    {
        printf("final del nombre");
    }
    system("pause");
}
