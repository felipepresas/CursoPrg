#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inout.h"
#include "extras.h"

int main(int argc, char *argv[]) {
	int i=0;
	char dni[50]="";
	int resultado;
	pintarCaratula("PRUEBA",'*',120);
	if(argc!=2)
		printf("Numero de parametros incorrecto\n");
	else{
		strcpy(dni,argv[1]);
		do{
			resultado=comprobarDNI(dni);
			if(resultado==0){
				strcpy(dni,pedirCadena("DNI"));
			}
			else printf("Has introducido el DNI correctamente\n");
		}while (resultado!=1);
	}
	return 0;
}
