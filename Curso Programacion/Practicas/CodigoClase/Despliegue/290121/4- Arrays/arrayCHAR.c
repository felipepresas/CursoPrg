#include <stdio.h>
#include <string.h>

int main(){
	int i=0;
	//Inicializacion de un array de caracteres
	char arrayCaracteres[10]="Pepito";
	//Visualizacion array de char. OJO!! 
	//Con el arrayINT no existe un formateo para mostrarlo en una linea. 
	//Siempre necesito un bucle
	printf("%s\n",arrayCaracteres);
	//Podemos mostrar el array caracter a caracter. ¿Como? Bucle
	//Con un bucle FOR
	/*for(i=0;i<strlen(arrayCaracteres);i++)
		printf("\n%c",arrayCaracteres[i]);*/
	//Con un bucle WHILE
	i=0;
	while(arrayCaracteres[i]!='\0'){
		printf("%c\n",arrayCaracteres[i]);
		i++;
	}	
	return 0;
}
