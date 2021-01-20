#include <stdio.h>
#include <string.h>

float peticionDatos();
void esCuadrado(float, float);
char * esCuadrado2(float,float);
int esCuadrado3(float, float);
float calculoArea(float,float);
float calculoPerimetro(float,float);

int main(){
	float lado1,lado2;
	int solucion=0;
//	printf("Introduce la base: ");
//	scanf("%f",&lado1);
//	printf("Introduce la altura: ");
//	scanf("%f",&lado2);
	lado1=peticionDatos();
	lado2=peticionDatos();
	//esCuadrado(n1,n2);
	//printf("La figura es un %s",esCuadrado2(n1,n2));
	solucion=esCuadrado3(lado1,lado2);
	if(solucion==1)
		printf("La figura es un cuadrado");
	else printf("La figura es un rectangulo");
	
	printf("\nEl area vale %.2f y el perimetro vale %.2f",calculoArea(lado1,lado2),calculoPerimetro(lado1,lado2));
	return 0;
}

float peticionDatos(){
	float lado;
	printf("Introduce un lado: ");
	scanf("%f",&lado);
	return lado;
}

void esCuadrado(float lado1, float lado2){
	if(lado1==lado2)
		printf("\nLa figura es un cuadrado");
	else printf("\nLa figura es un rectangulo");
}

char * esCuadrado2(float lado1, float lado2){
	//char resultado[20]="";
	if(lado1==lado2)
		return "cuadrado";
		//strcpy(resultado,"cuadrado");
	else 
		return "rectangulo";
		//strcpy(resultado,"rectangulo");
	//return resultado;
}

int esCuadrado3(float lado1, float lado2){
	if(lado1==lado2)
		return 1;
	else return 0;
}

float calculoArea(float lado1, float lado2){
	return lado1*lado2;
}

float calculoPerimetro(float lado1, float lado2){
	return ((2*lado1)+(2*lado2));
}
