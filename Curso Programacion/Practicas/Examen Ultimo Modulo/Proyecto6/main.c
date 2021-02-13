#include <stdio.h>
#include <stdlib.h>
#include "header.h"



int main()
{
	printf("Indique el Dni");
	char dni[10];
	gets(dni);
  	comprobarDNI(dni);
	
}
