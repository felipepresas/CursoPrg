#include <stdio.h>

char devolverInicial(char *);

int main(){
	char cadena[50]="", letra;
	printf("Introduce una cadena: ");
	gets(cadena);
	letra=devolverInicial(cadena);
	printf("La primera letra de %s es: %c",cadena, letra);
	
	return 0;
}

char devolverInicial(char *cadena){
	
	return cadena[0];
}
