#include <stdio.h>

int pedirDatos();

int detectarMayor(int,int);

int main(){
	int num1=0,num2=0;
	//int control=0;
	num1=pedirDatos();
	num2=pedirDatos();
	//control=detectarMayor(num1,num2);
	//if(control==3)
	if(detectarMayor(num1,num2)==3)
		printf("Los numeros son iguales");
	//else if(control==2)
	else if(detectarMayor(num1,num2)==2)
		printf("%d es el mayor y %d es el menor",num2,num1);
	else
		printf("%d es el mayor y %d es el menor",num1,num2);
	
	return 0;
}

int pedirDatos(){
	int num=0;
	printf("Introduce un numero: ");
	scanf("%d",&num);
	return num;
}

int detectarMayor(int num1,int num2){
	if(num1>num2)
		return 1;
	else if(num1<num2)
		return 2;
	else return 3;
}
