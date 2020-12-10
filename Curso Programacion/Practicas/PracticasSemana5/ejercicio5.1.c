
/* Vamos a crear un programa en C que muestre un menu de opciones que serán
Copiar una cadena
Concatenar una cadena con otra (separando las palabras correctamente
Calcular la longitud de una cadena
Salir */
#include <stdio.h>
#include <string.h>
int main()
{
    char cadena1[50], cadena2[50], cadena3[2] = " ", menu[50] = "";
    char separador=' ';
    
    printf("Seleccionar del menu\n");
    printf("Descomponer\nTransformar cadenas en mayuscular y minusculas\nCopiar una cadena\nConcatenar una cadena con otra\nCalcular la longitud de una cadena\nSalir\n");
    gets(menu);
    if ((strcmp(strlwr(menu), "transformar") == 0) || (menu[0] == 't'))
    {
        printf("Indique la primera palabra:");
        gets(cadena1);
        printf("Indique la segunda palabra palabra:");
        gets(cadena2);
        
        printf("Las palabra originales son %s,%s \n", cadena1, cadena2);
        printf("Palabras en minuscula %s %s \n", strlwr(cadena1), strlwr(cadena2));
        printf("Palabras en mayuscula %s %s \n", strupr(cadena1), strupr(cadena2));
    }
    else if ((strcmp(strlwr(menu), "copiar") == 0) || (strcmp(strlwr(menu), "cp")==0))
    {
        printf("Indique la primera palabra:");
        gets(cadena1);
        printf("Indique la segunda palabra palabra:");
        gets(cadena2);
        strcpy(cadena1, cadena2);
        printf("Las cadenas es %s y %s ", cadena1, cadena2);
    }
    else if ((strcmp(strlwr(menu), "concatenar") == 0 )|| (menu[0] == 'c'))
    {
        printf("Indique la primera palabra:");
        gets(cadena1);
        printf("Indique la segunda palabra palabra:");
        gets(cadena2);
        strcat(cadena1, cadena3);
        strcat(cadena1, cadena2);
        printf("La cadena es:%s \n", cadena1);
    }
    else if ((strcmp(strlwr(menu), "longitud")) == 0 || (menu[0] == 'l'))
    {
        printf("Indique la  palabra que desea conocer la longitud:");
        gets(cadena1);
        printf("Longitud de la cadena es: %d \n", strlen(cadena1));
    }
    else if ((strcmp(strlwr(menu), "salir") == 0 )||( menu[0] == 's'))
    {
        return 1;
    }
    else if ((strcmp(strlwr(menu), "descomponer")) == 0 || (menu[0] == 'd'))
    {
        printf("Indique la primera palabra descomponer:");
        gets(cadena1);
       for (size_t i = 0; i < count; i++)
       {
           /* code */
       }
       
    }
    else
    {
        printf("Error inesperado");
        return 2;
    }
    system("pause");
}