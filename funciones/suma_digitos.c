#include <stdio.h>
#include <stdlib.h>

int peticion_datos();
int sumadigitos(int);

int main(){
	int num;
	num=peticion_datos();
	printf("El valor de la suma es: %d",sumadigitos(num));
}

int peticion_datos(){
	int numero;
	printf("Introduce un entero: ");
	scanf("%d",&numero);
	return numero;
}

int sumadigitos(int numero){
	int i=0,suma=0;
	char cambio[20];
	itoa(numero,cambio,10);
	while(cambio[i]!='\0'){
		suma=suma+cambio[i]-'0';
		i++;
	}
	return suma;	
}
