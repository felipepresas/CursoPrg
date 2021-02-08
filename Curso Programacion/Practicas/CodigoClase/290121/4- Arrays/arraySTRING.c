#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int i=0;
	char nombres[5][20];
	char nombresAuto[5][20]={"Pepe","Rocio","Ruben","Jorge","Lucas"};
	//inicializacion por teclado de un array de strings
	printf("%s\n",nombresAuto[4]);
	for(i=0;i<5;i++){
		printf("Introduce el nombre del alumno %d: ",i+1);
		gets(nombres[i]);
	}
	//visualizacion de un array de STRINGS
	for(i=0;i<5;i++)
		printf("\n%s",nombres[i]);
		
	//visualizacion de la primera letra de cada nombre
	for(i=0;i<5;i++)
		printf("\n%c",nombres[i][0]);
	return 0;
}
