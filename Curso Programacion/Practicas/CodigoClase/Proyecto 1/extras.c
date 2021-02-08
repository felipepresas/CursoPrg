#include <stdio.h>
#include <string.h>
#include "extras.h"

void pintarCaratula(char *nombrePrograma,char dibu,int ancho){
	int i=0, mitadpalabra=strlen(nombrePrograma)/2;
	
	if(strlen(nombrePrograma)%2==0){
		for(i=0;i<(ancho/2)-mitadpalabra-1;i++)
			printf("%c",dibu);
			
		printf(" %s ",nombrePrograma);
	}
	else{
		for(i=0;i<(ancho/2)-mitadpalabra-2;i++)
			printf("%c",dibu);
				
		printf(" %s ",nombrePrograma);
	}
		for(i=0;i<(ancho/2)-mitadpalabra-1;i++)
			printf("%c",dibu);
		
	printf("\n");
}

char * depurarCadena(char *cadena){
	int i=0;
	while(cadena[i]!='\0')
		i++;
		
	cadena[i-1]='\0';
	
	return cadena;
}
