/* Vamos a rediseñar la funcion strcpy
La funcion strcpy nos permite copiar una 
variable de tipo string en otra variable de tipo string */
#include <stdio.h>
int main()
{
    int i;
    char cadena[30], copia[30];

    printf("Palabra a copiar");
    gets(cadena);

    for (i = 0; i < cadena[i] != '\0'; i++){
        copia[i] = cadena[i];
    }
    printf(" copia es:%s  \n cadena es:%s \n",cadena,copia);
    
    system("pause");
}