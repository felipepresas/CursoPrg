/* Vamos a crear un programa que este pidiendo 
numeros seguido hasta que introduzca un 0. 
En ese momento, el programa debe terminar 
diciendome cuantos numeros he introducido 
y cuanto vale la suma de ellos */
#include <stdio.h>
int main()
{
    int i, num, cont = 0, sumNum;
    for (i = 0; num != 0; i++)
    {
        printf("indique el numero");
        scanf("%d", &num);
        cont++;
        sumNum += num;
    }
    printf("La cuenta de numero es :%d \n", cont);
    printf("La sumatoria es :%d \n", sumNum);

    system("pause");
}