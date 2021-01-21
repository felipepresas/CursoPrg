//153 = 1 al cubo + 5 al cubo + 3 al cubo

#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int i, numero,sumaCubos,tam;
    char conversion[10];
    printf("Indique el numero:");
    scanf("%d", &numero);
    itoa(numero,conversion,10);
    //printf("el numero es: %d \n",numero);
    //printf("la conversion es: %s \n",conversion);
    tam=strlen (conversion);
    int numeros[tam];
    
    for (int i = 0; i < strlen(conversion); i++)
    {
        numeros[i]=conversion[i]-'0';
        sumaCubos=sumaCubos+pow(numeros[i], 3);
    } 
    printf("La suma cubos es %d \n",sumaCubos);
    system("pause");
}