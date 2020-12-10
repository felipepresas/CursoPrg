//153 = 1 al cubo + 5 al cubo + 3 al cubo

#include <stdio.h>
#include <string.h>
int main (){
    int i,numero;
    printf("Indique el numero:");
    scanf("%d",&numero);
    printf("tamano %d",sizeof(numero));    
    for (size_t i = 0; i < sizeof(numero); i++)
    {
        //printf("Valor al cubo:%d \n",pow(numero[i],3));
    }
    system("pause");
}