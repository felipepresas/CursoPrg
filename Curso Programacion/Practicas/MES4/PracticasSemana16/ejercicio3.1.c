/* Vamos a crear un programa que nos permita inicializar un array de caracteres utilizando numeros
Es decir.... cada posicion del array contendrá un numero
Entre el 0 y el 9
El programa debe contar el numero de "unos" introducido
El programa debe sustituir cada aparicion del numero "2" por la letra "Z"
El programa debe ser capaz de sumar el total de los elementos del array
1,2,3,4,5,6
Hay un 1
1,Z,3,4,5,6
La suma de todos los elementos es: 21 */

#include <stdio.h>
#include <string.h>

int main()
{
    int num[20] = {1, 2, 3, 4, 5, 6};
    int i, suma = 0, contUnos = 0;
    char cad1[2],cad2[2],cad3[2],cad4[2],cad5[2],cad6[2]; 

    for (i = 0; i < 6; i++)
    {
        suma = num[i] + suma;
        if (num[i] == 1)
        {
            contUnos++;
        }
    }
    
    itoa(num[0],cad1,10);
    itoa(num[1],cad2,10);
    itoa(num[2],cad3,10);
    itoa(num[3],cad4,10);
    itoa(num[4],cad5,10);
    itoa(num[5],cad6,10);

    printf("%d\n", contUnos);
    
    printf("%d\n", suma);

    system("pause");
}