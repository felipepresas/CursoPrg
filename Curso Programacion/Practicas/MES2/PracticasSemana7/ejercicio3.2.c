/* Vamos a pedir por teclado 10 numeros y 
vamos a calcular la media de ellos */
#include <stdio.h>
int main (){
    int i;
    float num,sum=0;
    for ( i = 1; i <= 10; i++)
    {
    printf("indique el numero %d: ",i);
    scanf("%d",&num);
    sum+=num;
    }
    printf("Media es: %.2f",sum/10.0);
    system("pause");
}