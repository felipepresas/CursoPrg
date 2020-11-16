#include <stdio.h> //stdio (libreria standar imput output), muy utilizada. El .h significa "header" cabecera.incluye la gets()
#include <string.h> //para poder copiar cadenas en otras...

//COPIAR CADENAS
/*Vamos a realizar un programa en C que permita realizar las siguientes tareas:
Copiar una cadena en otra
Calcular la longitud de la cadena
Calcular el tamaño de la cadena
Para ello, el programa debe pedir al usuario que introduzca por teclado una cadena cualquiera
Pista numero 1: usaremos la libreria <string.h>
Pista numero 2: strcpy permite copiar una cadena en otra
strlen y sizeof nos van a aportar tamaña y longitud de la cadena*/

//FUNCIÓN PRINCIPAL

int main (){
	//DECLARACION DE VARIABLES
	
	//se puede declarar const int longitud=100 y poner dentro de los nombres palaba longitud...
	char c1[30],c2[30];//char con [] ponemos numero de caracteres.
	int numstrlen ;
	//ZONA DE TRABAJO
	
	printf("ENCADENAR Y COPIAR\n");
	//Cadena 1
	printf("Introduce la primera: ");
	gets(c1);
	//Cadena 2
	printf("Introduce la segunda: ");
	gets(c2);
	strcpy(c1,c2);//lo que hay en la segunda se copia a la primera
	printf("Cadena copiada %s\n",c1);
	printf("Tu cadena mide %d caracteres\n", sizeof(c1));//mide lo que le puse arriba osea 30
	numstrlen=strlen(c2);//tamaño de letras de c2
   	printf ("El numero de letras es: %d" , numstrlen);

} //FINAL DE FUNCION.