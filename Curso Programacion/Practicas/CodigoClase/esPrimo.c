#include <stdio.h>
int esPrimo(int);
int peticiondedatos();

int main(){
	int num=0;
	num=peticiondedatos();
	if(esPrimo(num)==2){
		printf("El numero tiene %d divisores",esPrimo(num));
		printf("\nEl numero es primo");
	}
	else{
		printf("El numero tiene %d divisores",esPrimo(num));
		printf("\nEl numero no es primo");	
	}
	return 0;	
}

int peticiondedatos(){
	int numero;
	printf("Introduce un numero: ");
	scanf("%d",&numero);
	return numero;
}

int esPrimo(int num){
	int i=0,cant=0;
	//int divisores[2];
	for(i=1;i<=num;i++)
		if(num%i==0){
			//divisores[i]=i;
			cant++;
		}
		
	//if(cant==2 && divisores[0]==1 && divisores[1]==num)	
		return cant;
	//else return 0;
}
