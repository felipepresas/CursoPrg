/* Vamos a crear un programa en C que al ejecutarse lo haga de la siguiente manera
[nombre_del_programa] [param_1]
login admin
El programa debe comprobar que el param_1 (se corresponde con un nombre de
 usuario) existe
Si existe se pedira su clave y dispondremos de 3 intentos para introducirla
Si se introduce correctamente nos dirá bienvenido
Si se introduce de forma erronea nos dira: "Intendo X: prueba de nuevo"
Si la introdces 3 veces mal nos mostrará un error y finalizará el programa
Los datos para chequear los vamos a almacenar en un array de tal forma que 
siempre tengamos correspondencia entre usuario y clave
usuario1,clave1,usuario2,clave2,usuario3,clave3.....
char *misDatos[10]; */
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, j, contadorIntentos;
    char *logging[9][20];
    *logging[0] = "felipe",*logging[1] = "1234";
    *logging[2] = "carlos",*logging[3] = "1234";
    *logging[4] = "inakimanco",*logging[5] = "1234";
    *logging[6] = "joseantonio",*logging[7] = "1234";
    *logging[8] = "pepe",*logging[9] = "1234";

    char contrasena[20];

    if (argc != 2)
    {
        printf("Solo debe introducir 1 <Parametro>\n");
    }
    else
    {
        printf("\n\nINTRODUCCION DE DATOS\n\n");
        printf("%s\n", argv[1]);
        if (strcmp(argv[1], *logging[0]) == 0 ||
            strcmp(argv[1], *logging[2]) == 0 ||
            strcmp(argv[1], *logging[4]) == 0 ||
            strcmp(argv[1], *logging[6]) == 0 ||
            strcmp(argv[1], *logging[8]) == 0)
        {
            printf("correcto\n");
            printf("Introduce la contrasena:\n");
            gets(contrasena);
            for (i = 0, contadorIntentos = 1; i < 3; i++, contadorIntentos++)
            {
                for (j = 0; j < 5; j++)
                {
                    if (strcmp(contrasena, *logging[j + 1]) == 0 && strcmp(argv[1], *logging[j]) == 0)
                    {
                        printf("Bienvenido\n");
                        return 0;
                    }
                }
                fflush(stdin);
                printf("Incorrecto\n");
                printf("Intendo %d: prueba de nuevo:\n", contadorIntentos);
                gets(contrasena);
            }
        }
        else
        {
            printf("Incorrecto\n");
        }
    }
    system("pause");
}