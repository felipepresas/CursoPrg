#include <stdio.h>
#include <string.h>

int main()
{
    char cadena1[10] = "Pepe", cadena2[10] = "Pepe";
    int i = 0, aciertos = 0;
    for ( i = 0; i < strlen(cadena1); i++)
    {
        if (cadena1[i] == cadena2[i])
            aciertos++;
    }
    
    if (aciertos == strlen(cadena2) && strlen(cadena1) == strlen(cadena2))
    {
        printf("las cadenas son iguales.");
    }
    else
        printf("las cadenas son diferentes.");
    
    system("pause");
}