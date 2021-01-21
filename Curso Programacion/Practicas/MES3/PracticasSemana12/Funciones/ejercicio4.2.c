#include <stdio.h>
#include <string.h>

float pedirDecimal(int, int, char*);

int main()
{
    float max;
    float min;
    pedirDecimal(min ,max ,"Edad");
    
    system("pause");
} 

float pedirDecimal (int min, int max,char*finalidad)
{
    float num =-10000000;
    printf(" indique un valor minimo\n");
    scanf("%d",&min);
    
    printf(" indique un valor maximo\n");
    scanf("%d",&max);
    
    while ((num < min) || (num > max))
    {
        if ((num >= min) && (num <= max))
        {
            printf("[%s]Indique un valor entre %.2f - %.2f \n",finalidad, min, max);
            scanf("%.2f",&num); 
        }
        else
        {
            printf("Error en el dato \n");
            printf("[%s]Indique un valor entre %d - %d \n",finalidad, min, max);
            scanf("%.2f",&num); 
        }
    }
    return num;
}