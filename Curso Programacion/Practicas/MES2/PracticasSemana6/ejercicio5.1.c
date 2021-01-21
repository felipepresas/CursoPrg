#include <stdio.h>
#include <string.h>

int main()
{
    int i, e = 0;
    char palabra[20], control[20];
    printf("Indique la palabra");
    gets(palabra);

    for (i = strlen(palabra) - 1; i >= 0; i--, e++)
    {
        control[e] = palabra[i];
        printf("\n control %d Letra %c \n palabra %d Letra %c ", e, control[e], i, palabra[i]);
    }

    system("pause");
}