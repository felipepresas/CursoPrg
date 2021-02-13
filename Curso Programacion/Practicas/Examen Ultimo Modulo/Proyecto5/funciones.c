#include <stdio.h>
#include <string.h>
#include "header.h"

float suma(float num1, float num2)
{
    return num1 + num2;
}


char inicial(char* cadena){
	printf("\nIndique una cadena ");
    gets(cadena);
    printf("%c",cadena[0]);
    
    return cadena[0];
}
