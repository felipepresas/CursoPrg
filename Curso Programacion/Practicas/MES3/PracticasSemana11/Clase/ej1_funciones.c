#include <stdio.h>
#include <math.h>
#include <string.h>

#define programa "Ejercicio 1"
void caratula(char * );
int suma (int, int);
int resta (int, int);
int cubo (int);
double raiz (int);

int main(){
	int n1, n2;
	caratula(programa);
	printf("Introduce un numero: ");
	scanf("%d",&n1);
	printf("Introduce otro numero: ");
	scanf("%d",&n2);
	printf("\nLa suma de %d y %d es: %d",n1, n2, suma(n1,n2));
	printf("\nLa resta de %d y %d es: %d",n1, n2, resta(n1,n2));
	printf("\nEl cubo de %d es %d y el de %d es %d.",n1,cubo(n1), n2, cubo(n2));
	printf("\nLa raiz de %d es %.2f y la de %d es %.2f",n1,raiz(n1),n2,raiz(n2));
	
	return 0;
}
void caratula (char *caratula){
	printf("%s\n\n",caratula);
}

int suma (int n1, int n2){
	return (n1+n2);
}

int resta (int n1, int n2){
	return n1-n2;
}

int cubo (int n1){
	return pow(n1,3);
}

double raiz (int n1){
	return sqrt(n1);
}
