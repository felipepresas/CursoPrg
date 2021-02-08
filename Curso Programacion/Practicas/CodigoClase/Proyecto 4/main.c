#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int i=0,j=0,aviso=0;
	char concatenada[41]="",aux[41]="";
	if(argc!=3)
		printf("Error en la llamada.\n\nHas pasado %d argumentos\n\nLa llamada correcta seria: Proyecto4 <param1> <param2>\n\n",argc-1);
	else if(strlen(argv[1])>20 || strlen(argv[2])>20)
			printf("La longitud de los parametros es incorrecta. Maximo 20 caracteres por parametro\n\n");
	else{
		for(i=0;i<strlen(argv[1]);i++)
			if(isdigit(argv[1][i])!=0)
				aviso++;
		
		for(i=0;i<strlen(argv[2]);i++)
			if(isdigit(argv[2][i])!=0)
				aviso++;
		
		if(aviso!=0){
			printf("Alguna de las cadenas tiene numeros.\n\n RECUERDA, los parametros no pueden tener numeros\n\n");	
			return 0;
		}
		else{
			strcat(concatenada,argv[1]);
			strcat(concatenada,argv[2]);
			printf("\n%s\n",concatenada);
			
			for(j=0,i=strlen(concatenada);i>=0;i--,j++){
				aux[j]=concatenada[i];
				printf("%c",aux[j]);
			}	
		}
	}
	return 0;
}
