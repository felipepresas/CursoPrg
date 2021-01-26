#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inout.h"

#define MIN_EDAD 0
#define MAX_EDAD 100
#define MIN_NOTA 0
#define MAX_NOTA 10
#define MIN_FECHA 1900
#define MAX_FECHA 2021


int main(int argc, char *argv[]) {
	int numero=0;
	float nota=0;
	char letra, cadena[50];
	
	numero=pedirEntero(MIN_FECHA,MAX_FECHA,"FECHA");
	printf("\nLa fecha es: %d\n\n",numero);
	
	nota=pedirFloat(MIN_NOTA,MAX_NOTA,"NOTA");
	printf("\nLa nota del alumno es: %.2f\n\n",nota);
	
	letra=pedirCaracter('b','d',"INICIAL");
	printf("\nLa letra introducida es: %c\n\n",letra);
	
	strcpy(cadena,pedirCadena("NOMBRE_PERSONA"));
	printf("\nLa cadena introducida es: %s\n\n",cadena);
	
	return 0;
}
