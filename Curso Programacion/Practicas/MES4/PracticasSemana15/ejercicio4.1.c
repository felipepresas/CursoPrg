/* Vamos a crear un programa que reciba por teclado 3 parametros
2 numeros enteros
y una palabra
Esas palabras pueden ser: suma, resta, multiplicacion y division */
#include <stdio.h>
#include <string.h>

int suma(int, int);
int resta(int, int);
int multiplica(int, int);
float divide(int, int);

int main(int argc, char *argv[])
{
    int num[10];
    num[0] = atoi(argv[1]);
    num[1] = atoi(argv[2]);
    argv[3] = strlwr(argv[3]);

    if (argc != 4)
    {
        printf("Debe introducir 3 parametros");
    }
    else
    {
        if (strcmp(argv[3], "suma") == 0)
        {
            printf("La suma es: %d\n", suma(num[0], num[1]));
        }
        else if (strcmp(argv[3], "resta") == 0)
        {
            printf("La resta es:%d\n", resta(num[0], num[1]));
        }
        else if (strcmp(argv[3], "multiplica") == 0)
        {
            printf("La multiplicacion es:%d\n", multiplica(num[0], num[1]));
        }
        else if (strcmp(argv[3], "divide") == 0)
        {
            printf("La division es:%.2f\n", divide(num[0], num[1]));
        }
        else
        {
            printf("Las palabras pueden ser: suma, resta, multiplica y divide\n");
        }
    }

    system("pause");
}

int suma(int num1, int num2)
{
    return num1 + num2;
}
int resta(int num1, int num2)
{
    return num1 - num2;
}
int multiplica(int num1, int num2)
{
    return num1 * num2;
}
float divide(int num1, int num2)
{
    return (float)num1 / num2;
}