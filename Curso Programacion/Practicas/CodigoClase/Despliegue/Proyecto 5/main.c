#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "complementos.h"

int main(int argc, char *argv[]) {
	char concatenada[41]="", aux[41]="";
	
	if(comprobarParametros(argc)==0)
		return 0;
	
	else if(comprobarLongitud(argv[1],argv[2])==0)
		return 0;
	
	else if(comprobarNumeros(argv[1], argv[2])==0)
		return 0;
	
	else{
		strcpy(concatenada,concat(argv[1],argv[2]));
		printf("\nOriginal: %s\n",concatenada);
		strcpy(aux,voltear(concatenada,strlen(concatenada)));
		printf("\nVolteada: %s\n",aux);
	}
	return 0;
}
