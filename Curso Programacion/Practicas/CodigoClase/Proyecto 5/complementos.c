#include <stdio.h>
#include <string.h>
#include "complementos.h"

int comprobarParametros(int num){
	if(num<3){
		printf("\nError en la llamada.");
		printf("\n\nHas pasado %d argumentos, menos argumentos de los obligatorios",num-1);
		printf("\n\nLa llamada correcta seria: concatenarParametros <param1> <param2>\n\n");
		return 0;
	}
	else if(num>3){
		printf("\nError en la llamada.");
		printf("\n\nHas pasado %d argumentos, mas argumentos de los obligatorios",num-1);
		printf("\n\nLa llamada correcta seria: concatenarParametros <param1> <param2>\n\n");
		return 0;
	}
	else return 1;		
}

int comprobarLongitud(char *cad1, char *cad2){
	int cual=0,cual2=0;
	if(strlen(cad1)>20)
		cual++;
	
	if (strlen(cad2)>20)
		cual2++;
	
	if(cual==0 && cual2==0)
		return 1;
	else{
		printf("\nError en la llamada.");
		if (cual==1)
			printf("\n\nLa longitud del parametro 1 [%s] supera 20 caracteres",cad1);
		if (cual2==1)
			printf("\n\nLa longitud del parametro 2 [%s] supera 20 caracteres",cad2);

		printf("\n\n[NOTA] Cada parametro tiene un maximo de 20 caracteres\n");
		return 0;
	}
}

int comprobarNumeros(char *cad1, char*cad2){
	int i=0, aviso=0, aviso2=0;
	for(i=0;i<strlen(cad1);i++)
			if(isdigit(cad1[i])!=0)
				aviso++;
		
		for(i=0;i<strlen(cad2);i++)
			if(isdigit(cad2[i])!=0)
				aviso2++;
		if(aviso!=0 || aviso2!=0){	
			if(aviso!=0)
				printf("El parametro 1 [%s] contiene numeros",cad1);

			if(aviso2!=0)
				printf("\n\nEl parametro 2 [%s] contiene numeros",cad2);
		
			printf("\n\nRECUERDA, los parametros no pueden tener numeros\n\n");	
			return 0;
		}
		else return 1;
}

char * concat (char *cad1, char *cad2){
	char concatenada[41]="";
	strcat(concatenada,cad1);
	strcat(concatenada,cad2);
	
	return concatenada;
	
}

char * voltear (char *concatenada, int tam){
	int i=0,j=0;
	char aux[tam];
	for(i=strlen(concatenada)-1;i>=0;i--){
		aux[j]=concatenada[i];
		j++;
	}
	aux[j]='\0';

	return aux;
}
