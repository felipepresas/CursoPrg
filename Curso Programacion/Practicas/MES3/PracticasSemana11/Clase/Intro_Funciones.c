#include <stdio.h>
#include <string.h>
#include <math.h>

/*PUNTOS IMPORTANTES DE LAS FUNCIONES
* NECESITAMOS DECLARACION (antes del main), LLAMADA(en el main) Y DEFINICION(despues del main)*
* TIPO DEVUELTO -> TIPOS DE ENTRADA*
* EVITAR USO DE VARIABLES GLOBALES
* REUTILIZACIÓN DE CÓDIGO*/

//Funcion que reciba 2 numeros y me devuelva la suma de ellos
float sumar (float, float);
//Funcion que no recibe parámetros y no devuelve parámetros
void bienvenida();
//Funcion que recibe dos numeros y me devuelve el mayor de ellos
float elmayor(float,float);

int main(){
	float n1=0, n2=0, n3=2.4, n4=2.8, total=0, mayor=0;
	bienvenida();
	printf("\nIntroduce un numero: ");
	scanf("%f",&n1);
	printf("\nIntroduce otro numero: ");
	scanf("%f",&n2);
	total=sumar(n1,n2);
	printf("\nLa suma por teclado vale: %.2f",total);
	printf("\nLa suma predeclarada vale: %.2f", sumar(n3,n4));
	if(n1==n2)
		printf("Los numeros son iguales");
	else{
		mayor= elmayor(n1,n2);
		printf("\nEl mayor es: %d",mayor);
	}
	return 0;
}

void bienvenida(){
	int n1=0, n2=0;
	float n3=8.1, n4=4.2;
	printf("\nNumero1: ");
	scanf("%d",&n1);
	printf("\nNumero2: ");
	scanf("%d",&n2);
	
	printf("Suma: %d",n1+n2);
	printf("Suma2: %.2f",n3+n4);
	printf("\n\nHOLA A TODOS\n\n");
}

float sumar (float n1, float n2){
	return n1+n2;
}

float elmayor(float n1, float n2){
	if(n1>n2)
		return n1;
	else if (n1<n2)
		return n2;
}
