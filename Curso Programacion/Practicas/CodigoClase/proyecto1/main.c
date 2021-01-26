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
#define MAX_TERM 120
#define SEPARADOR 6


int main() {

	int numero=0;
	float nota=0;
	char nombrePrograma[50] = "Elproyecto";
	char palabra[50] = "";

	caratula(nombrePrograma, SEPARADOR,MAX_TERM);

	printf("Indique cadena: ");
	fgets(palabra, sizeof(palabra), stdin);

	printf("La cadena es : %s", palabra);
	printf("La cadena es : %s\n", palabra);

	printf("La cadena es : %s", quitarNfgets(palabra));
	printf("La cadena es : %s", palabra);
	printf("La cadena es : %s", palabra);

	system("pause");
	
	return 0;
}
