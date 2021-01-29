//Vamos a crear un nuevo proyecto.
//Introduciremos en el todos los archivos necesarios para poder
//utilizar nuestras funciones predefinidas
//Aparte, el programa principal pedira un DNI(funcion getString) 
//que el usuario introducirá.El programa solo aceptará DNI correctos,
//es decir 8 numeros y una letra
//Si esto no se cumple, dirá que el DNI tiene defecto de forma
//Si introducimos 8 numeros y una letra, debe comprobar que el dni sea correcto o incorrecto
//El programa solo finaliza cuando el DNI es completamente correcto

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h >
#include <ctype.h>
#include "Header.h"

int main() {

	int num= 54658489;
	char dniIndicado[50]="",copia[50];

	strcpy(copia,pedirCadena(dniIndicado));
	
	dniCorrecto(copia);


	system("pause");

	return 0;
}
