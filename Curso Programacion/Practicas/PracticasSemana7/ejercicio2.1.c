#include <stdio.h>
int main (){
    int i,num1,num2,sum=num1;
    printf("Indique el numero min");
    scanf("%d",&num1);
    printf("Indique el numero max");
    scanf("%d",&num2);
    
    for ( i = num1; i <= num2; i++)
    {
        sum=sum+num1;
        num1++;
    }
    printf("sumatoria es:%d \n",sum);

    getchar();
    system("pause");
}