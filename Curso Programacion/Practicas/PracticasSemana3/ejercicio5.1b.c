/* Usando la funcion STRCMP */

#include <stdio.h>
#include <string.h>
int main()
{
    const char miNombre[6] = "R2D2";
    char nombre[30];
    char aux1;

    printf("Indique su nombre: ");
    gets(nombre);
    printf("%s", nombre);

    fflush(stdin);
    aux1 = toupper(nombre);
    printf("%s", aux1);

    if (strcmp(aux1, miNombre) == 0)
    {
        printf("\nHas introducido tu nombre: %s\n", nombre);
    }
    else
    {
        printf("\nTu amigo se llama: %s\n", nombre);
    }
    system("pause");
    getchar();
}