#include <stdio.h>

int main(){
    int n1,n2,r1,r2;

    printf("\nIntroduce el primer numero");
    scanf("%d",&n1);
    printf("\nIntroduce el segundo numero");
    scanf("%d",&n2);

    r1=n1;
    r2=n2;

    n1=r2;
    n2=r1;

    printf("los valores son: primer numero %d , segundo numero %d",n1,n2);

}