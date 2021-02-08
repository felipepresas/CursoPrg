#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inout.h"
#include "extras.h"

#define MIN_EDAD 0
#define MAX_EDAD 100
#define MIN_NOTA 0
#define MAX_NOTA 10
#define MIN_FECHA 1900
#define MAX_FECHA 2021
#define DIBU '#'
#define MAXTERM 120


int main(int argc, char *argv[]) {
	int numero=0;
	float nota=0;
	char letra, cadena[50];
	
	pintarCaratula("PRUEBAPROYECTOS",DIBU,MAXTERM);
	
	printf("Cadena: ");
	fgets(cadena,sizeof(cadena),stdin);
	printf("1-%s",cadena);
	printf("%d---Algo mas\n",strlen(cadena));
	strcpy(cadena,depurarCadena(cadena));
	printf("%s",cadena);
	printf("ALGO MAS");
	printf("\n%d",strlen(cadena));
	/*numero=pedirEntero(MIN_FECHA,MAX_FECHA,"FECHA");
	printf("\nLa fecha es: %d\n\n",numero);
	
	nota=pedirFloat(MIN_NOTA,MAX_NOTA,"NOTA");
	printf("\nLa nota del alumno es: %.2f\n\n",nota);
	
	letra=pedirCaracter('b','d',"INICIAL");
	printf("\nLa letra introducida es: %c\n\n",letra);
	
	strcpy(cadena,pedirCadena("NOMBRE_PERSONA"));
	printf("\nLa cadena introducida es: %s\n\n",cadena);*/
	
	return 0;
}
