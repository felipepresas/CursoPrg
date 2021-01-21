/* Vamos a crear un menu
Que nos de 5 opciones
1. Suma // 2. Resta
3. Multiplicacion// 4. Division
5. Salir
¿Opción elegida
En una pantalla "limpia", vamos a mostrar la
cabecera de la función a realizar; imprimiremos la operacion y mostraremos el resultado */

#include <stdio.h>
#include <math.h>
int main()
{
    float num1, num2;
    char opcion[20];
    const char s[6] = "suma", r[6] = "resta", m[16] = "multiplicacion", d[16] = "division", e[6] = "salir";

    printf("Selecciones una opcion: \n");
    printf("%s \n", s);
    printf("%s \n", r);
    printf("%s \n", m);
    printf("%s \n", d);
    printf("%s \n", e);

    gets(opcion);

    if (strcmp(opcion,e)==0)
    {
        printf("Salida\n");
        getchar();
        return 1;
    }
    fflush(stdin);
    printf("Indique el numero 1 para la operacion:");
    scanf("%f", &num1);
    printf("Indique el numero 2 para la operacion:");
    scanf("%f", &num2);
    system("cls");

    if (strcmp(opcion, s) == 0)
    {
        printf("La suma es %.2f \n", num1 + num2);
    }
    else if (strcmp(opcion, s) == 0)
    {
        printf("La resta %.2f \n", num1 - num2);
    }
    else if (strcmp(opcion, m) == 0)
    {
        printf("La multiplicacion %.2f \n", num1 * num2);
    }
    else if (strcmp(opcion, d) == 0)
    {
        if (num2 <= 0)
        {
            printf("Numero 2 debe ser mayor de 0\n");
        }
        else
        {
            printf("La division %.2f \n", num1 / num2);
        }
    }
    else
    {
        printf("Error 404 \n");
    }

    system("pause");
}