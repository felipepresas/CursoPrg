/* Ejercicio que pedirá al usuario tres números enteros, y devolverá, es decir, 
imprimirá en pantalla la suma de todos los números positivos introducidos por el usuario,
 e imprimirá también la suma de todos los números negativos introducidos por el usuario. 
Recuerda que vamos a meter al cero en la categoría de positivos. 
Tambien, adicionalmente, me mostrara cuantos numeros positivos se han introducido
 y cuantos numeros negativos se han introducido*/
#include <stdio.h>
int main()
{
    int num1, num2, num3, contadorPos = 0, contadorNeg = 0, sumapos = 0, sumaneg = 0;
    printf("Indique lo Numeros a sumar:");
    scanf("%d:%d:%d", &num1, &num2, &num3);
    if (num1 >= 0)
    {
        contadorPos++;
        sumapos = sumapos + num1;
    }
    else
    {
        contadorNeg++;
        sumaneg = sumaneg + num1;
    }
    if (num2 >= 0)
    {
        contadorPos++;
        sumapos = sumapos + num2;
    }
    else
    {
        contadorNeg++;
        sumaneg = sumaneg + num2;
    }
    if (num3 >= 0)
    {
        contadorPos++;
        sumapos = sumapos + num3;
    }
    else
    {
        contadorNeg++;
        sumaneg = sumaneg + num3;
    }
    printf("La cantidad de numeros positivos es: %d y la suma es: %d \n", contadorPos, sumapos);
    printf("La cantidad de numeros negativos es: %d y la suma es: %d \n", contadorNeg, sumaneg);
    system("pause");
}