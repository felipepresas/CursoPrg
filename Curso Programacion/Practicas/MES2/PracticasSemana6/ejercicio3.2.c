/* Vamos a crear un programa en C que nos pida un numero por teclado
A través de un bucle FOR, debe calcular la tabla de 
multiplicar del 1 al 10 para ese numero ¿Como debe ser la salida?
Numero introducido: 6
6 x 1 = 1
6 x 2 = 12
6 x 3 = 18
6 x d4 = 24
6 x 10 = 60 */
#include <stdio.h>
int main()
{
    int i = 0, numero;
    printf("Indique el numero a multiplicar:");
    scanf("%d", &numero);
    for (size_t i = 1; i <= 10; i++)
    {
        
        printf("%dx%d=%d\n",numero,i,(numero*i) );
    }
    system("pause");

}