#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int i=0;
	//muestro cuantos parametros introduzco
	printf("Valor de argc: %d",argc);
	//muestro un parametro concreto
	printf("\nValor de argv: %s\n",argv[2]);
	//muestro todos los parametros
	for(i=0;i<argc;i++)
		printf("Parametro %d: %s\n",i,argv[i]);
	return 0;
}
