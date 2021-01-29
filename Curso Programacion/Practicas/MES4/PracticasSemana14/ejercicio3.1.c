
/* Crear un programa en C que pida dos cadenas de caracteres y,
 a través de dos funciones primero las concatene y luego les de la vuelta
Las cadenas serás recibidas a través de la función fgets
- No deben tener numeros
- Como máximo las cadenas tendrán, 20 caracteres */
#include <stdio.h>
#include <string.h>

char *pedirCadena(char *);
char *concatenar(char *, char *);
char *voltear(char *);

int main(int argc, char* argv[])
{
    char cad1[21], cad2[21], cadenaTerminado[41];

    pedirCadena(cad1);
    pedirCadena(cad2);

    strcpy(cadenaTerminado, concatenar(cad1, cad2));
    voltear(cadenaTerminado);
    printf("%s", cadenaTerminado);

    system("pause");
}
char *concatenar(char *cad1, char *cad2)
{
    char cadenaConcatenada[40];
    int i = 0, j = 0;

    for (i = 0; i < strlen(cad1); i++)
    {
        cadenaConcatenada[i] = cad1[i];
    }
    for (j = 0; j < strlen(cad2); i++, j++)
    {
        cadenaConcatenada[i] = cad2[j];
    }
    return cadenaConcatenada;
}
char *voltear(char *cadena)
{
    int i = 0, j = 0;
    char cadenaReves[40] = " ";
    for (i = strlen(cadena); i < 0; i--, j++)
    {
        cadenaReves[j] = cadena[i];
    }
    printf("%s", cadenaReves);

    return cadenaReves;
}

char *pedirCadena(char *cadena)
{
    int i;
    fflush(stdin);
    printf("Introduce una cadena: ");
    fgets(cadena, 20, stdin);
    for (i = 0; i <= cadena[i] != '\0'; i++)
    {
        if (cadena[i] == '\n')
        {
            cadena[i] = ' ';
        }
    }
    return cadena;
}