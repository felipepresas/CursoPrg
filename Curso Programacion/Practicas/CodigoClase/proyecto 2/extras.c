#include <stdio.h>
#include <string.h>
#include <ctype.h>
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

char letra (int dni){
	char letra[23] = "TRWAGMYFPDXBNJZSQVHLCKE";
	return letra[dni%23];
}

int comprobarDNI (char *dni){
	int numdni=0, i=0;
	char numeros[9]="";
	char letraCal, letraOrig=dni[strlen(dni)-1];

	printf("%s--->%d\n",dni,strlen(dni));
	if(strlen(dni)!=9){
		printf("Error de forma\n");
		return 0;
	}
	else{
		for(i=0;i<8;i++){
			numeros[i]=dni[i];
			if(isdigit(numeros[i])==0){
				printf("Caracteres no numericos\n");
				return 0;
			}
		}
	}
	numeros[i]='\0';
	printf("%s->%d->%c\n",numeros,strlen(numeros),letraOrig);
	
	numdni=atoi(numeros);
	letraCal=letra(numdni);
	if(letraCal==toupper(letraOrig))
		return 1;
	else{
		printf("DNI erroneo\n");
		return 0;
	}
}
