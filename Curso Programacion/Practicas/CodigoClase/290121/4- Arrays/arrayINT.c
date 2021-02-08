#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int i=0;
	//inicializacion manual de un array numerico
	int arrayNumericoBucle[5], arrayNumerico[5]={13,27,29,81,87};
	
	//mostramos un elemento del array
	printf("---Un elemento del array---\n");
	printf("%d\n",arrayNumerico[2]);
	
	//mostramos todos los elementos del array
	printf("---Todos los elementos del array---\n");
	for(i=0;i<5;i++)
		printf("%d\n",arrayNumerico[i]);
	
	//inicializacion por teclado de un array numerico
	for(i=0;i<5;i++){
		printf("\nIntroduce el numero %d: ",i+1);
		scanf("%d",&arrayNumericoBucle[i]);
	}
	
	//visualizacion de todos los elementos del array
	for(i=0;i<5;i++)
		printf("%d\n",arrayNumericoBucle[i]);
	
	return 0;
}
