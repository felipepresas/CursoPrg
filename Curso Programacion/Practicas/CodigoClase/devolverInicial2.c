#include <stdio.h>
#include <string.h>

char* pedirDatos();
char devolverInicial(char *);

int main(){
	char cadena[50]="", letra;
	strcpy(cadena,pedirDatos());
	letra=devolverInicial(cadena);
	printf("La primera letra de %s es: %c",cadena, letra);
}

char* pedirDatos(){
	char cadena[50]="";
	printf("Introduce un nombre: ");
	gets(cadena);
	return cadena;
}

char devolverInicial(char *cadena){
	
	return cadena[0];
}
