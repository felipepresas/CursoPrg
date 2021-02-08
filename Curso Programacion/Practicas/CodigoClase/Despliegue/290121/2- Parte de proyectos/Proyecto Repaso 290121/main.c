#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main(int argc, char *argv[]){
	int i=0;
	char cadena[20], inicial;
	int unodecinco,numL=0, arrayNumeros[5];
	strcpy(cadena,pedirCadena());
	inicial=primeraLetra(cadena);
	numL=numerodeletras(cadena);
	printf("El numero de caracteres de %s es: %d",cadena,numL);
	printf("\nLa inicial de %s es %c\n\n\n",cadena,inicial);
	arrayNumeros[0]=dameCinco()[0];
	for(i=0;i<5;i++)
		arrayNumeros[i]=dameCinco()[i];
	
	return 0;
}
