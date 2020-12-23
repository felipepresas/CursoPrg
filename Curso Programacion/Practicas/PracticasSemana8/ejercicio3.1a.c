/* Crear un programa que me permita introducir 
numeros seguido mientras el numero introducido 
sea mayor que el anterior. El programa terminará 
cuando introduzcamos un 0 y debe contar el numero 
total de numeros introducidos calcular su suma y
su media */
#include <stdio.h>
#include <string.h>

int main()
{
    int i, sumNum = 0, num[100],numAnterior=0;
    num[0] = 1;
    for (i = 0; numAnterior<num[i]; i++)
    {   printf("valor i incial %d",num[i]);
        printf("Introduzca un numero:\n");
        scanf("%d", &num[i]);
        sumNum += num[i];
        numAnterior=num[i];
        printf("numero actual %d numero anterior %d:\n", num[i], numAnterior);

    }
    printf("Numero total numeros es :%d\n", i - 1);
    printf("La media es :%d\n", sumNum / (i - 1));
    system("pause");
}