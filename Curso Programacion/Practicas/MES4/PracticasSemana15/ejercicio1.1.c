/* Vamos a crear un pequeño programa en C que me permita 
introducir por teclado 5 nombres; los reciba y los muestre

b) Mejoramos el ejercicio pidiendo un nombre base,
 y comprobando si es uno de los que he introducido por teclado */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i,cont;
    char nombres[5][10];
    char copia[10];
    strcpy(copia, argv[1]);
     
    printf("Peticion de datos\n");

    for (i = 0; i < 5; i++)
    {
        printf("Indique el %d nombre ", i + 1);
        gets(nombres[i]);
    }
    for (i = 0, cont=0; i < 5; i++)
    {
        if (strcmp(copia, nombres[i]) == 0)
        {
            cont++;
        }
    }
    if (cont>0)
    {
        printf("Es uno de los introducido por los teclados\n");
    }
    else
    {
        printf("No se encuentra\n");
    }
    
    

    system("pause");
}