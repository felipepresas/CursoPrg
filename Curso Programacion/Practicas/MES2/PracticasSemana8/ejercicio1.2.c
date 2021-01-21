/* Vamos a crear un programa en C que me pida una cadena
A partir de esa cadena, determinar que queremos hacer
1- Contar vocales
2- Contar espacios
3- Contar numero de caracteres
4- salir */
#include <stdio.h>
#include <string.h>
int main()
{
    int i, cont=0, menu;
    char frase[50];
    printf("Indique la frase evaluar:");
    gets(frase);
    tolower(frase);
    printf("Indique con un numero una opcion del menu:\n");
    printf(" 1- Contar vocales\n 2- Contar espacios\n 3- Contar numero de caracteres\n 4- salir\n");
    scanf("%d", &menu);
    fflush(stdin);
    switch (menu)
    {
    case 1:
        for (i = 0; i < strlen(frase); i++)
        {
            if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
            {
                cont ++;
            }
        }
        printf("El numero de vocales es: %d\n", cont);
        break;
    case 2:
        for (i = 0; i < strlen(frase); i++)
        {
            if (frase[i] == ' ')
            {
                cont++;
            }
        }
        printf("El numero de espacios es: %d\n", cont);
        break;
    case 3:
        for (i = 0; i < frase[i] != '\0'; i++)
        {
            cont++;
        }
        printf("El numero de caracteres es: %d\n", cont);
        break;
    case 4:
        return (1);
        break;
    default:
        printf("Error no esperado\n");
        break;
    }
    system("pause");
}