#include <stdio.h>
#include <string.h>

char* pedirDatos();
char devolverInicial(char *);

int main(){
	printf("La primera letra es: %c",devolverInicial(pedirDatos()));
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
