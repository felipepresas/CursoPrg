#include <stdio.h>
#include <string.h>

#define CAMBIO '@'

//Ejercicio que transforma todas las vocales de una cadena en un caracter

//funcion que recibe parametro string
/*char * transformar (char *);

int main(){
	char cadena[20]="Manolito Gafotas";
	printf("%s",transformar(cadena));
	
	return 0;	
}

char * transformar (char *cadena){
	int i=0;
	strlwr(cadena);
	while(cadena[i]!='\0'){
		if(cadena[i]=='a' || cadena[i]=='e'|| cadena[i]=='i' || cadena[i]== 'o' || cadena[i]=='u'){
			cadena[i]='1';
		}
		i++;
	}
	return cadena;
}*/
char * transformar (char *, int, char);

int main(){
	int posicion=7;
	char cadena[20]="Manolito Gafotas";
	printf("%s",transformar(cadena,posicion,CAMBIO));
	
	return 0;	
}
// Funcion que recibe parametro string y otro entero
char * transformar (char *cadena, int posicion, char cambio){
	int i=0;
	strlwr(cadena);
	if(cadena[posicion]=='o')
		cadena[posicion]='$';
		
	while(cadena[i]!='\0'){
		if(cadena[i]=='a' || cadena[i]=='e'|| cadena[i]=='i' || cadena[i]== 'o' || cadena[i]=='u'){
			cadena[i]=cambio;
		}
		i++;
	}

	return cadena;
}
