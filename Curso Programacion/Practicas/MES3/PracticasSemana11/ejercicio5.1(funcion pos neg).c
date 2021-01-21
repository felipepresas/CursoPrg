/* Vamos a crear una funcion en C que sea capaz de identificar los 
positivos y los negativos de una serie numerica introducida por teclado
Estaremos introduciendo datos hasta poner un 0
La funcion en cuestión gestionará todos los datos introducidos 
y me devolverá cuales son positivos y cuales negativos
Es decir, como parametro de entrada tendrá la serie numerica y 
como parametro de salida los positivos y los negativos
La cantidad de* */
#include <stdio.h>
#include <string.h>

int main()
{
    int i=0, contadorPos = 0, contadorNeg = 0;
    char num[50]= {1,1, 2, 3};

    int void contadNum()
    
    while (num[i]!= 0)
    {
        printf("indique el numero");
        scanf("%d", &num[i]);
        num[i] = num[i];
        printf("numero pos es %d\n",num[i]);
        printf("posicion es %d\n",i);
        printf("numero es %d\n",num);
        
        i++;
    }

    // for (i = 0; num != 0; i++)
    // {
    //     printf("indique el numero");
    //     scanf("%d", &num);
    //     if (num >= 0)
    //     {
    //         contadorPos++;
    //     }
    //     else
    //         contadorNeg++;
    // }
    // printf("La cuenta de numero positivos es :%d \n", contadorPos);
    // printf("La cuenta de numero negativos es :%d \n", contadorNeg);

    system("pause");
}