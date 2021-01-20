/* Vamos a crear un programa en C que pida por teclado una direccion de correo electronico
El programa, a través de una funcion, comprobará si el correo está bien formado; es deicr
-> debe seguir la nomenclatura aaa@aaa.com */

#include <stdio.h>
#include <string.h>

char *peticionDatos(char *);
int validarCorreo(char *);

int main()
{
    char correo[50];
    printf("%s", peticionDatos(correo));
    if (validarCorreo(correo)==0)
    {
        printf("\nEmail incorrecto");
    }
    else
    {
        printf("\nEmail correcto");
    }
    system("pause");
}

char *peticionDatos(char *correo)
{
    printf("Indique correo\n");
    gets(correo);
    return correo;
}
int validarCorreo(char *correo)
{
    int i ,aciertos=0;
    for ( i = 0; i <strlen(correo); i++)
    {
        if (correo[i] == '@')
        {
            aciertos++;
        }
    }
    
    if (aciertos==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
