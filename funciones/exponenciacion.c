#include <stdio.h>

int pedirDatos();
long int exponenciacion(int,int); 

int main(){
	int base=0,exp=0;
	base=pedirDatos();
	exp=pedirDatos();
	printf("El resultado de elevar %d a %d es %ld",base,exp,exponenciacion(base,exp));
	return 0;
}

int pedirDatos(){
	int num=0;
	printf("Introduce un numero: ");
	scanf("%d",&num);
	return num;
}

long int exponenciacion(int base,int exp){
	int i=0;
	long int total=1;
	for(i=0;i<exp;i++)
		total=total*base;
	
	return total;	
} 
