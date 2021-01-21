/* Vamos a crear un programa que nos permita hacer 
la descomposición factorial de un numero */
#include <stdio.h>
#include <string.h>

int main (){
    int num, i=1;
    printf("Indique un numero: ");
    scanf("%d",&num);

    while (i<=num)
    {
        if (num%i==0)
        {
            printf("Factorial:%d\n",i);
        }
        i++;
    }
    system("pause");
}