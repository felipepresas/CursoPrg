/*argc y argv son variables del sistema.
no son nada declarado por nosotros, ya existen previamente.
argc recoge el numero de parametros que le pasamos a main
argv recoge cuales son esos parametros
*/

/*Como se trabaja con funciones
1. Necesito el prototipo (antes del main o en un fichero .h aparte)
   El prototipo necesita ¡¡¡¡SOLO!!!! los tipos que recibe la funcion y que devuelve
2. Necesito invocar a la funcion (dentro del main). Poner su nombre y las variables que pasamos
3. Necesito desarrollar la funcion (despues del main o en un fichero .c aparte). La lógica de la funcion
   Toda funcion que devuelve un tipo de dato (diferente a void) necesita un return
*/

/*Que una funcion devuelva void significa que va a hacer un printf. Nada más.*/
/*Cuando asigno funciones, "el tipo de dato que hay antes del igual debe coincidir con el tipo de dato que hay despues del igual*/

#include <stdio.h>
#include <string.h>
#define CARACTER '-'
/*[dato devuelto][nombredelafuncion][(tipos de dato de entrada]);*/

int sumarEntero(int,int); //solo he puesto los tipos de dato
int recogerEntero();
float sumarFloat(float,float);
float recogerFloat();
void pintarLinea(char);

int main(int argc, char *argv[]){
	
	int n1=0, n2=0, sumatorio=0;
	float f1=0, f2=0, sumatoriofloat=0;
	pintarLinea(CARACTER);
	/*int*/n1=/*int*/recogerEntero();
	n2=recogerEntero();

	sumatorio=sumarEntero(n1,n2); /*llamada a la funcion suma*/
	printf("\nLa suma de enteros vale %d",sumatorio);
	//printf("\nLa suma vale %d",suma(n1,n2));
	//printf("\nLa suma vale %d",suma(recogerEntero(),recogerEntero()));
	
/****************************************************************************/
	/*float*/f1=/*float*/recogerFloat();
	f2=recogerFloat();
	sumatoriofloat=sumarFloat(f1,f2);
	printf("\nLa suma de floats vale %.2f",sumatoriofloat);
	
	return 0;	
}

void pintarLinea(char caracter){
	int i=0;
	for(i=0;i<120;i++)
		printf("%c",caracter);
}

int sumarEntero(int numero1,int numero2){ //NOTA: las variables son locales. En esta funcion sus nombres no coinciden. En la funcion sumarFloat si.*/
	int resultado=0;
	resultado = numero1+numero2;
	return resultado;
	//return numero1+numero2;
}

int recogerEntero(){
	int num=0;
	printf("\n\nIntroduce un numero entero: ");
	scanf("%d",&num);
	return num;
}

float sumarFloat(float f1 ,float f2){
	float sumaF=0;
	sumaF=f1+f2;
	return sumaF;
}

float recogerFloat(){
	float num=0;
	printf("\n\nIntroduce un numero float: ");
	scanf("%f",&num);
	return num;
}
