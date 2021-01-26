#include <stdio.h>
#include <string.h>

#define MAX_TERM 120
#define SEPARADOR '&'

void pintarCaratula(char *, char, int);

int main(){
	pintarCaratula("PEPE", SEPARADOR, MAX_TERM);	
	return 0;
}

void pintarCaratula(char *nombre,char separador,int maxterm){
	int i, tam;
	tam=strlen(nombre)/2;
	if(tam%2==0){
		for(i=0;i<(maxterm/2)-tam-1;i++)
			printf("%c",separador);
		printf(" %s ",nombre);
	}
	else{
		for(i=0;i<(maxterm/2)-tam-2;i++)
			printf("%c",separador);
		printf(" %s ",nombre);	
	}
	for(i=0;i<(maxterm/2)-tam-1;i++)
		printf("%c",separador);
}
