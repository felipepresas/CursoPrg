#include <stdio.h>
#include <string.h>

float pedirDecimal(int, int, char*);
char * pedirCadena(char *);
char pedirCaracter(char);
char combertirMinuscula(char);

int main()
{
    char letras[20],copiar[20]; 
    char letra;
    float max;
    float min;

    strcpy(copiar,pedirCadena(letras));
    printf("%s ",copiar);

    printf("%c ",pedirCaracter(letra));
    printf("%c ",combertirMinuscula( pedirCaracter(letra)));
    
    pedirDecimal(min ,max ,"Edad");
    
    system("pause");
} 

float pedirDecimal (int min, int max,char*finalidad)
{
    float num =-10000000;
    printf(" indique un valor minimo\n");
    scanf("%d",&min);
    
    printf(" indique un valor maximo\n");
    scanf("%d",&max);
    
    while ((num < min) || (num > max))
    {
        if ((num >= min) && (num <= max))
        {
            printf("[%s]Indique un valor entre %.2f - %.2f \n",finalidad, min, max);
            scanf("%.2f",&num); 
        }
        else
        {
            printf("Error en el dato \n");
            printf("[%s]Indique un valor entre %d - %d \n",finalidad, min, max);
            scanf("%.2f",&num); 
        }
    }
    return num;
}
char * pedirCadena(char * cadena){
    printf("\nIndique una cadena ");
    gets(cadena);
    return cadena;
}
char  pedirCaracter(char  caracter){
    printf("\nIndique una caracter ");
    scanf("%c",&caracter);
    return caracter;
}
char  combertirMinuscula(char  caracter){
    printf("\nIndique un caracter ");
    scanf("%c",&caracter);
    atoi();

    return caracter+32;
}

