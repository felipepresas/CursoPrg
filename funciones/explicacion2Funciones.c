#include <stdio.h>
/*
PASO 1 -> PROTOTIPOS
Indican al programa los tipos de datos que recibe y devuelve la funcion
Se situan antes de la llamada a la funcion main
*/

int suma (int, int); //Creamos un prototipo que recibe 2 enteros y devuelve un entero

void resta (int, int);

int main(){
	int num1=0, num2=0, sum=0;
	
	printf("Introduce el numero 1: ");
	scanf("%d",&num1);
	
	printf("Introduce el numero 2: ");
	scanf("%d",&num2);
	
	sum=suma(num1,num2); //PASO 2-> Llamada a la funcion pasando parametros
	printf("La suma vale: %d\n",sum);
	resta(num1,num2);
	
	/*
	 *Lo normal, es que estos parámetros ya contengan informacion
	 *Pueden llegar a traves de constantes, variables o retornos de
	 *otras funciones. La llamada a las funciones debe realizarse
	 *dentro de una funcion.
	*/
	
	return 0;
}

/*PASO 3 DESARROLLO DE LA FUNCION
En este paso se desarrolla todo lo que va a realizar la funcion
es decir, la operativa.
La cabecera es la misma que la del prototipo pero añadiendo el nombre
de las variables de entrada (no las de salida).
El valor/valores que devuelve (si debe hacerlo), lo hace a través de un return
*/
int suma (int num1, int num2){
	int sumatorio=0;
	
	sumatorio=num1+num2;
	
	return sumatorio;
	
}

void resta (int num1, int num2){
	int resta=0;
	resta=num1-num2;
	printf("La resta vale: %d",resta);
	
	//no hay return porque es una funcion que devuelve void
}
