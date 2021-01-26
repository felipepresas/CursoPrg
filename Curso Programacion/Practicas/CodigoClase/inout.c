/*DESARROLLOS DE LAS FUNCIONES*/
#include <stdio.h>
#include "inout.h"

int pedirEntero(int min, int max, char *finalidad){
	int num=0;
	do{
		printf("[%s]-Introduce un numero entero (%d-%d): ",finalidad, min,max);
		scanf("%d",&num);
		comprobarEntero(min,max,num);
	}while(num<min || num>max);
	
	return num;
}

float pedirFloat(float min, float max, char *finalidad){
	float num=0;
	do{
		printf("[%s]-Introduce un numero decimal (%.0f-%.0f): ",finalidad, min,max);
		scanf("%f",&num);
		comprobarFloat(min,max,num);
	}while(num<min || num>max);
	
	return num;
}

void comprobarEntero(int min, int max, int num){
	if(num<min || num>max)
		printf("\nHas introducido un numero fuera de rango\n\n");
}

void comprobarFloat(float min, float max, float num){
	if(num<min || num>max)
		printf("\nHas introducido un numero fuera de rango\n\n");
}
