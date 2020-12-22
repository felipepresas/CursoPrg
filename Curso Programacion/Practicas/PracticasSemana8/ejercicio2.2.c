/* Vamos a crear un programa que tenga almacenada una variable de 
tipo cadena que sera una contraseña
A) El usuario va a introducir palabras seguido hasta que acierte
B) El usuario dispone de 5 intentos para descifrar la contraseña
C) El usuario dispone de 5 intentos y, si no lo consigue, se le 
dirá en que intento estuvo más de acertar */
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, contAcierto[5] = {0}, comparadorAcierto = 0;
    const char clave[6] = "casa";
    char frase[sizeof(clave)] = "";

    /*          while (strcmp(clave,frase))
    {
        printf("introduzca clave: ");
        gets(frase);
        printf("------ Frase %s\n",frase);
        printf("------ Clave %s\n",clave);
    } */
    /*     for (i = 0; (strcmp(clave, frase)) ; i++)
    {
        printf("introduzca clave: ");
            gets(frase);
        if (i==5)
        {  
            return 0;
        }
    } */
    for (i = 0; (strcmp(clave, frase)); i++)
    {
        printf("introduzca clave: ");
        gets(frase);
        for (j = 0; j <= strlen(frase); j++)
        {
            if (frase[j] == clave[j])
            {
                contAcierto[i]++;
             if (contAcierto[i] > comparadorAcierto)
            {
                comparadorAcierto = contAcierto[i]-1;
            }
            }
        }
       
        if (i == 5)
        {
            return 0;
        }
    }
    printf("Intento %d y aciertos %d\n", i , comparadorAcierto);
    system("pause");
}