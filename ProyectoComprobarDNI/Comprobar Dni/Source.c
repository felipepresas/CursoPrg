/*DESARROLLOS DE LAS FUNCIONES*/
#include <stdio.h>
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

char* pedirCadena(char * cadena) {
	char cadena[50];
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
