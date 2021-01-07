/* Vamos a crear un programa que seguido numeros pares
mientras el usuario indique que quiere seguir introduciendo numeros
Para indicar que quiere seguir introduciendo numero debe contestar S o N */
#include <stdio.h>
#include <string.h>
int main()
{
    int num, i = 0;
    char menu = 'S';
    while (menu == 'S')
    {
        printf("Cuenta pares: (%d)", i);
        printf("\n\nEscriba un numero par:");
        scanf("%d", &num);
        if (num % 2 != 0)
        {
            printf("\n%d no es un numero par intentelo de nuevo\n", num);
        }
        else
        {
            fflush(stdin);
            printf("Quiere escribir otro numero par?(S/N):");
            scanf("%c", &menu);
            menu = toupper(menu);
            i++;
        }
    }

    printf("\nHas escrito %d pares\n", i);
    system("pause");
}