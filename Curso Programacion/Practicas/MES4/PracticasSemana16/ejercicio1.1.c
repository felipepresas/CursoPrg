#include <stdio.h>
#include <string.h>

struct datos
{
    char usuario[20];
    char contrasena[20];
};
int main(int argc, char *argv[])
{
    struct datos logging[20] = {"felipe", "1234", "Luis", "1234"};

    char contrasena[20];

    int i, j, k, contadorIntentos, contadorConexion;
    if (argc != 2)
    {
        printf("Solo debe introducir 1 <Parametro>\n");
    }
    else
    {

        printf("\n\nINTRODUCCION DE DATOS\n\n");
        printf("Indique Usuario\n");
        printf("\nEl usuario%s\n", argv[1]);

        for (k = 0; k < 5; k++, contadorConexion)
        {
            if (strcmp(argv[1], logging[k].usuario) == 0)
            {
                printf("correcto\n");
                printf("Introduce la contrasena:\n");
                gets(contrasena);
                for (i = 0, contadorIntentos = 1; i < 3; i++, contadorIntentos++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        if (strcmp(contrasena, logging[j + 1].contrasena) == 0 && strcmp(argv[1], logging[j].usuario) == 0)
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
    }
    system("pause");
}