#include <stdio.h>
#include <stdlib.h>
#include "inout.h"


int main() {
	int num;
	num = peticion_datos();
	printf("El valor de la suma es: %d", sumadigitos(num));
}
