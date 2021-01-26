#include <stdio.h>

int detectarMayor(int,int);

int main(){
	int num1=0,num2=0,mayor=0;
	printf("Introduce el numero 1: ");
	scanf("%d",&num1);
	printf("Introduce el numero 2: ");
	scanf("%d",&num2);
	
	mayor=detectarMayor(num1,num2);
	
	printf("\nEl mayor es: %d",mayor);
	
	if(mayor==num1)
		printf("\nEl menor es: %d",num2);
	else printf("\nEl menor es: %d",num1);
	
	return 0;
}

int detectarMayor(int num1,int num2){
	if(num1>num2)
		return num1;
	else return num2;
}
