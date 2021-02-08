#include <stdio.h>
#include <string.h>
#include "funciones.h"

int asignar_operacion(char *operacion){
	if(strcmp(operacion,"suma")==0)
		return 1;
	else if (strcmp(operacion,"resta")==0)
		return 2;
	else if (strcmp(operacion,"multiplicacion")==0)
		return 3;
	else if(strcmp(operacion,"division")==0)
		return 4;
	else
		return 0;
}

void operaciones (int num_operacion, int n1, int n2){
	switch (num_operacion){
		case 1:
			printf("\nSuma: %d\n\n",n1+n2);
			break;
		case 2:
			printf("\nResta: %d\n\n",n1-n2);
			break;
		case 3:
			printf("\nMultiplicacion: %d\n\n",n1*n2);
			break;
		case 4:
			if(n2==0)
				printf("\nOjo!Estas dividiendo entre 0\n\n");
			else
				printf("\nDivision: %.2f\n\n",(float)n1/n2);
			break;
		default:
			printf("\nOperacion no contemplada\n");
			printf("\nOperaciones permitidas: suma, resta, multiplicacion y division\n\n");
			break;
		}
}
