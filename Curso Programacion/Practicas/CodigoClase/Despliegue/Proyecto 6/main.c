#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main(int argc, char *argv[]){
	int i=0, n1=0, n2=0, num_operacion=0;
	char operacion[20];
	if(argc!=4){
		printf("\nSintaxis Incorrecta");
		printf("\nSe esperaba nombre_programa [operacion][num_int1][num_int2]\n\n");
	}
	else{
		strcpy(operacion,strlwr(argv[1]));
		num_operacion=asignar_operacion(operacion);
		n1=atoi(argv[2]);
		n2=atoi(argv[3]);
		operaciones(num_operacion,n1,n2);
	}
	return 0;
}
