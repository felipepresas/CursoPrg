#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num=0, resultado=0;
	printf("Introduce un numero: ");
	scanf("%d",&num);
	resultado=esPar(num);
	
	if(resultado==1)
		printf("El numero es par");
	else printf("El numero no es par");
	
	return 0;
}
