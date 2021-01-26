#include <stdio.h>
#include <stdlib.h>
#include "inout.h"

int peticion_datos() {
	int numero;
	printf("Introduce un entero: ");
	scanf("%d", &numero);
	return numero;
}

int sumadigitos(int numero) {
	int i = 0, suma = 0;
	char cambio[20];
	//    
	while (cambio[i] != '\0') {
		suma = suma + cambio[i] - '0';
		i++;
	}
	return suma;
}
