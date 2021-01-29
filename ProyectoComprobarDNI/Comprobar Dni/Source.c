/*DESARROLLOS DE LAS FUNCIONES*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "Header.h"

int pedirEntero(int num) {
	num = 0;

	printf("-Introduce un numero entero : ");
	scanf("%d", &num);
	return num;
}

float pedirFloat(float num) {
	num = 0;

	printf("-Introduce un numero decimal : ");
	scanf("%f", &num);

	return num;
}

char pedirCaracter(char caracter) {
	caracter = ' ';
		fflush(stdin);
		printf("-Introduce un caracter: ");
		scanf("%c", &caracter);

	return caracter;
}

char* pedirCadena(char * cadena[50]) {
	fflush(stdin);
	printf("Introduce una cadena: ");
	gets(cadena);
	return cadena;
}

void comprobarEntero(int min, int max, int num) {
	if (num<min || num>max)
		printf("\nHas introducido un numero fuera de rango\n\n");
}

void comprobarFloat(float min, float max, float num) {
	if (num<min || num>max)
		printf("\nHas introducido un numero fuera de rango\n\n");
}

char transformarCaracter(char inicio, char fin, char caracter) {
	if (caracter<inicio || caracter>fin) {
		printf("\nIntroduce un caracter dentro de rango\n\n");
		return '0';
	}
	else if (caracter >= 'a' && caracter <= 'z')
		return caracter;
	else return caracter + 32;
}
void caratula(char* nombre, char caracter, int ancho) {
	int i;
	ancho = ancho - strlen(nombre);
	for (i = 0; i < ancho / 2; i++) {
		printf("%c", caracter);
	}
	printf("%s", nombre);
	for (i = 0; i < ancho / 2; i++) {
		printf("%c", caracter);
	}
}
char localizarLetra(int dniNum)
{
	int i, posNumDni = 0;
	const int divisorDni = 23;
	char letra[23] = "TRWAGMYFPDXBNJZSQVHLCKE";
	
	posNumDni = dniNum % divisorDni;

	for (i = 0; i < 22; i++)
	{
		if (i == posNumDni)
		{
			return letra[i];
		}
	}
	printf("Posicion del Dni es: %d\n", posNumDni);
	return letra[i];
}
bool dniCorrecto(char * cadenaDni)
{
	char coleccionDni[50]=" ";
	int i, numDni=0;
	bool respuesta=false;

		if (strlen(cadenaDni) != 9)
		{
			printf("\nhas introducido una cadena incorrecta\n");
		}
		else
		{
			for (i = 0; i < 8; i++)
			{
				if (isdigit(cadenaDni[i]) && !isdigit(cadenaDni[8]))
				{
					coleccionDni[i] = cadenaDni[i];
				}
				else
				{
					printf("\nhas introducido una cadena incorrecta\n");
				}
			}
			numDni = atoi(coleccionDni);
			printf("coleccion numero %d\n", numDni);

			if (localizarLetra(numDni) == toupper(cadenaDni[8]))
			{
				printf("La letra coincide\n");
			}
			else
			{
				printf("La letra no es correcta\n");
			}
		}
	
	return respuesta;
}

