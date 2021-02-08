#include <stdio.h>
#include <string.h>

//¡¡¡¡IMPORTANTISIMO LEER Y COMPRENDER ESTO!!!!!!
/*SIEMPRE QUE APAREZCAN CADENAS, TENGO QUE TRABAJAR CON FUNCIONES DE CADENA*/

/*Para poder trabajar con funciones que reciben o devuelven cadenas
hay que tener claro que las cadenas se tratan de forma diferente; necesito
sus funciones propias*/

//PROTOTIPO [TIPO DEVUELTO][NOMBREDELAFUNCION][TIPO DE DATO RECIBIDO]
//Para pasar o recibir cadenas utilizo la notacion char *

char * pedirCadena();
int numerodeletras(char *);
char primeraLetra (char *);
int * dameCinco();

int main(int argc, char *argv[]){
	char cadena[20], inicial;
	int unodecinco,numL=0, arrayNumeros[5];
	strcpy(cadena,pedirCadena());
	inicial=primeraLetra(cadena); //char=char
	numL=numerodeletras(cadena);
	printf("El numero de caracteres de %s es: %d",cadena,numL);
	printf("\nLa inicial de %s es %c\n\n\n",cadena,inicial);
	//asi asignariamos un array de enteros a un array de enteros...es decir,numero a numero
	
	//Método A(ndres): posicion a posicion manualmente
	arrayNumeros[0]=dameCinco()[0];
	
	//Método B: posición a posicion pero con un for 
	for(i=0;i<5;i++)
		arrayNumeros[i]=dameCinco()[i];
	
	return 0;
}

char * pedirCadena(){
	char resultado[20];
	printf("Introduce una cadena: ");
	gets(resultado);
	return resultado;
}

int numerodeletras(char *cadena){
	int i=0, contador=0;

	for(i=0;i<strlen(cadena);i++)
		contador++;
	return contador;
}

char primeraLetra (char *cadena){
	//return cadena[0];
	char letra;
	letra=cadena[0];
	return letra;
}

int * dameCinco(){
	int i=0, numeros[5];
	for(i=0;i<5;i++){
		printf("Introduce entero: ");
		scanf("%d",&numeros[i]);
	}
	
	return numeros;
}
