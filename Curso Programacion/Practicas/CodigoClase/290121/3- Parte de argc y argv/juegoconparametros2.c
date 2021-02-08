#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	char listadeprofes[50]="Orto";
	char param[20];
	if(argc!=2){
		printf("Te has equivocado. Pon un modificador");
	}
	else{
		strcpy(param,argv[1]);
		if(strcmp(param,listadeprofes)==0)
			printf("El usuario es el profe");
		else printf("El usuario es un alumno");
	}
	return 0;
}
