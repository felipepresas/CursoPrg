#include <stdio.h>

int pedirNumero();
void imprimirTabla (int);

int main(){

	//int num=0;
	//num=pedirNumero();
	//imprimirTabla(num);
	imprimirTabla(pedirNumero());
	return 0;
}

int pedirNumero(){
	int num;
	printf("Introduce un numero: ");
	scanf("%d",&num);
	return num;
}

void imprimirTabla (int numero){
	int i=0;
	for(i=0;i<=10;i++)
		printf("\n%d x %d = %d",numero,i,numero*i);
}
