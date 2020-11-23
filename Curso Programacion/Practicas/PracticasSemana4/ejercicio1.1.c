#include<stdio.h>
int main (){
    int num1,num2;
    printf("Introduzca numero1: ");
    scanf("%d",&num1);
    printf("Introduzca numero2: ");
    scanf("%d",&num2);
    
    if (num1>num2)
    {
        printf("\nEl numero mayor es :%d y el menor es : %d",num1,num2);
    }
    else
    {
          printf("\nEl numero mayor es :%d y el menor es : %d",num2,num1);
    }
    
    system("pause");
    
}
