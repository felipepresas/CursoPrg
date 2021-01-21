/* Vamos a crear un programa en C que sea capaz de calcular el exponencial de un numero introducido por teclado11:40
Por ejemplo11:40
Introduzco de base 2 y de exponente 4 y me tiene que devoler 16 */
#include <stdio.h>
#include <math.h>
int main()
{
    int i, numero, exponente,contador=1;
    printf("Indique el numero: ");
    scanf("%d", &numero);
    printf("Indique el numero: ");
    scanf("%d", &exponente);

    for ( i = 1; i <= exponente; i++)
    {
        //printf("%d \n", numero * numero);
        contador=contador*numero;
        printf("%d",contador);
    }
    printf("Exponencial pow: %d \n", pow(numero, exponente));
    system("pause");
}