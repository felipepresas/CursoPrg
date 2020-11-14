#include <stdio.h>

int main(){
    int n1,n2,a1;

    printf("\nIntroduce el primer numero: ");
    scanf("%d",&n1);
    printf("\nIntroduce el segundo numero: ");
    scanf("%d",&n2);

    printf("Los valores son: primer numero %d , segundo numero %d",n1,n2);

    a1=n1;
    n1=n2;
    n2=a1;
    

    printf("\nLos valores son: primer numero %d , segundo numero %d",n1,n2);

}