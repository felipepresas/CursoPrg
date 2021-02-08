#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	if(argc<2){
		printf("\nError de sintaxis. %d Argumentos: insuficientes\n",argc);
		printf("\nSintaxis correcta: [programa][usuario]\n");
	}
	else if(argc>2){
		printf("\nError de sintaxis. %d Argumentos: demasiados\n",argc);
		printf("\nSintaxis correcta: [programa][usuario]\n");
	}
	else printf("\nEMPEZAMOS\n");
	return 0;
}
