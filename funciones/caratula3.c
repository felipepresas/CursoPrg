#include <stdio.h>
#include <string.h>

int pedirNumero();
char pedirCarac();
char * pedirNombre();
void caratula(char *, char, int);

int main(){
	int max_term=0;
	char carac_dibujo, nombre_programa[100];
	max_term=pedirNumero();
	carac_dibujo=pedirCarac();
	strcpy(nombre_programa,pedirNombre());
	printf("\nResultado de la funcion:");
	printf("\n%d...%c...%s\n\n",max_term,carac_dibujo,nombre_programa);
	caratula(nombre_programa,carac_dibujo,max_term);
	
	return 0;
}

int pedirNumero(){
	int numero;
	printf("Introduce un el ancho del terminal: ");
	scanf("%d",&numero);
	return numero;
}

char pedirCarac(){
	char caracter;
	fflush(stdin);
	printf("Introduce un caracter: ");
	scanf("%c",&caracter);
	return caracter;
}

char * pedirNombre(){
	char nombre[20];
	fflush(stdin);
	printf("Introduce un nombre para el programa: ");
	gets(nombre);
	return nombre;
}

void caratula(char *nom_programa, char carac_dibujo, int ancho_term){
	int i=0, tam=0;
	
	tam=strlen(nom_programa)/2;
	
	for(i=0;i<(ancho_term/2)-tam;i++)
		printf("%c",carac_dibujo);
	
	printf("%s",nom_programa);
	
	for(i=0;i<(ancho_term/2)-tam-1;i++)
		printf("%c",carac_dibujo);
}
