#include <stdio.h>
#include <string.h>
#include "funciones.h"

char * pedirCadena(){
	char resultado[20];
	printf("Introduce una cadena: ");
	gets(resultado);
	return resultado;
}

int numerodeletras(char *cadena){
	int i=0, contador=0;

	for(i=0;i<strlen(cadena);i++)
		contador++;
	return contador;
}

char primeraLetra (char *cadena){
	char letra;
	letra=cadena[0];
	return letra;
}

int * dameCinco(){
	int i=0, numeros[5];
	for(i=0;i<5;i++){
		printf("Introduce entero: ");
		scanf("%d",&numeros[i]);
	}
	
	return numeros;
}
