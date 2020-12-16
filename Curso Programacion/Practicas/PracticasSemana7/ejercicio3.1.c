/* Vamos a crear un programa que pida un numero
 y que devuelva ese numero en asterisco */

#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j, num;
    printf("indique el largo del tronco: ");
    scanf("%d", &num);
    printf("");
    printf("\t   *\n");
    printf("           **\n");
    printf("\t  ***\n");
    printf("\t *****\n");
    printf("\t*******\n");
    printf("      **********\n");
    printf("     ********");
    
    for ( i = 0; i < num; i++)
    {
    for (j = 0; j < 4; j++)
    {
        printf("*");
    }
    printf("\n\t");
    }
    printf("\n");
    system("pause");
}