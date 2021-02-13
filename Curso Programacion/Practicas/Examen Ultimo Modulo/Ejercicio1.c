#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[20];
    int contaCaracteres=0,contaVocales=0;
    int i=0;
    printf("\nIndique una cadena ");
    gets(cadena);
    printf("Cadena contada con Funcion",strlen(cadena));
    //printf("Usando Funion que cuenta caracteres",strlen(cadena));
     
    while ( cadena[i]!='\0')
    {
        contaCaracteres++;
        i++;
        if (cadena[i]=='a'||cadena[i]=='e'||cadena[i]=='i'||cadena[i]=='o'||cadena[i]=='u')
    {
        contaVocales++;
    }
    }
    printf("la cantidad de caracteres son: %d\n",contaCaracteres);
    printf("la cantidad de vocales son: %d",contaVocales);
    if (strcmp(cadena,"PSI")==0)
    {
        printf("El Nomrbe es PSI\n");
    }
    else
    {
        printf("El Nomrbe no es PSI\n");
    }

    system("pause");
}
