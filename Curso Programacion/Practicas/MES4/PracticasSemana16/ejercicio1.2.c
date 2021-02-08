#include <stdio.h>
#include <string.h>

struct datos
{
    char usuario[20];
    char contrasena[20];
};

int main()
{
    struct datos logging[20]={"felipe","1234","Luis","1234"};

   char usuario[20];
    char contrasena[20];

    int i, j, k, contadorIntentos, contadorConexion;

    printf("\n\nINTRODUCCION DE DATOS\n\n");
    printf("Indique Usuario\n");
    gets(usuario);

    for (k = 0; k < 5; k++, contadorConexion)
    {
        if (strcmp(usuario, logging[k].usuario) == 0)
        {
            printf("correcto\n");
            printf("Introduce la contrasena:\n");
            gets(contrasena);
            for (i = 0, contadorIntentos = 1; i < 3; i++, contadorIntentos++)
            {
                for (j = 0; j < 5; j++)
                {
                    if (strcmp(contrasena, logging[j + 1].contrasena) == 0 && strcmp(usuario, logging[j].usuario) == 0)
                    {
                        printf("Bienvenido\n");
                        return 0;
                    }
                }
                fflush(stdin);
                printf("Incorrecto\n");
                printf("Intento %d: prueba de nuevo:\n", contadorIntentos);
                gets(contrasena);
            }
        }
        else
        {
            contadorConexion++;
        }
    }

    if (contadorConexion == 5)
    {
        printf("Usuario incorrecto");
    }
    system("pause");
}