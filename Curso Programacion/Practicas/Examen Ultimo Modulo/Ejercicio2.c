#include <stdio.h>
#include <string.h>

int main()
{
    int num[12] = {1, 2, 0, 4, 5, 6, 0, 8, 9, 4};
    int num2[12];
    int i, suma = 0, contCinco = 0, contadorCero = 0;

    for (i = 0; i < 10; i++)
    {
        num2[i] = num[i];
    }
     for (i = 0; i < 10; i++)
    {
        printf("%d", num[i]);
    }
    printf("\n");
   
   
    
    for (i = 0; i < 10; i++)
    {
        suma = num[i] + suma;
        if (num2[i] == 0)
        {
            num2[i] = 5;
            contadorCero++;
        }
        if (num2[i] == 5)
        {
            contCinco++;
        }
    }
        for (i = 0; i < 10; i++)
    {
        printf("%d", num2[i]);
    }

    printf("\nCantidad de cero %d\n", contadorCero);
    printf("\nCantidad de cinco %d\n", contCinco);

    printf("\nLa suma %d\n", suma);

    system("pause");
}
