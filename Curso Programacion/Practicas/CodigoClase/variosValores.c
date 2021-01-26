#include <stdio.h>
#include <string.h>

char * variasCosas();

int main(){
	char argumentos[20];
	strcpy(argumentos,variasCosas());
	printf("%s",argumentos);
	printf("\n%c",argumentos[1]);
	return 0;
}

char * variasCosas(){
	char valores[20];
	char letra, numero;
	fflush(stdin);
	
	printf("Introduce una letra: ");
	scanf("%c",&letra);
	fflush(stdin);
	printf("Introduce un numero: ");
	scanf("%c",&numero);
	
	valores[0]=letra;
	valores[1]=numero;
	
	return valores;
}
