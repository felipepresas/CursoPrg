/* Vamos a crear un programa en C
que pida dos numeros positivos (limite inferior y limite superior) y
determine la cantidad de numero pares que hay */

#include <stdio.h>
#include <string.h>
int main()
{
    int num1, num2,i,contpares,contimpares;
    char cad1[50],cad2[50];
    printf("Indique dos numeros positivos (limite inferior):");
    scanf("%d", &num1);
    printf("Indique dos numeros positivos (limite superior):");
    scanf("%d", &num2);
    printf("%d - %d\n", num1, num2);
    itoa(num1,cad1, 10);
    itoa(num2,cad2, 10);
    strcat(cad1,cad2);
    printf("%s\n", cad1);
    for ( i = 0; i < cad1[i] != '\0'; i++)
    {
        if (cad1[i]%2==0 )
        {
            contpares=contpares++;
        }
        else
        {
            contimpares=contimpares++;
        }
    }
    printf("Contador de pares:%d\n",contpares);
     printf("Contador de impares:%d\n",contimpares);
    
   system("pause");
}