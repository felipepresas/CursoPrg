#include <stdio.h>
#include <string.h>

void caratula(char *, char, int);

int main(){
	
	caratula("FUNCION CARATULA",'*',120);
	
	return 0;
}

void caratula(char *nom_programa, char carac_dibujo, int ancho_term){
	int i=0, tam=0;
	
	tam=strlen(nom_programa)/2;
	
	printf("%s->%c->%d\n",nom_programa,carac_dibujo,ancho_term);
	printf("%d\n",tam);
	
	for(i=0;i<(ancho_term/2)-tam;i++)
		printf("%c",carac_dibujo);
	
	printf("%s",nom_programa);
	
	for(i=0;i<(ancho_term/2)-tam;i++)
		printf("%c",carac_dibujo);
}
