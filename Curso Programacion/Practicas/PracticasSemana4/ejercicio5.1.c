/* Ejercicio que pedirá al usuario tres números enteros, y devolverá, es decir, 
imprimirá en pantalla la suma de todos los números positivos introducidos por el usuario,
 e imprimirá también la suma de todos los números negativos introducidos por el usuario. 
Recuerda que vamos a meter al cero en la categoría de positivos. 
Tambien, adicionalmente, me mostrara cuantos numeros positivos se han introducido
 y cuantos numeros negativos se han introducido*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Indique lo Numeros a sumar:");
    scanf("%d:%d:%d", &num1, &num2, &num3);
    if ((num1 >= 0) && (num2 >= 0) && (num3 >= 0))
    {
        printf("La suma de variable es: %d \n", num1 + num2 + num3);
        printf("Se han introducido 3 numeros positivos");
        
    }
    else if ((num1 >= 0) && (num2 >= 0) && (num3 < 0))
    {
        printf("La suma de variable es: %d \n", num1 + num2);
        printf("Se han introducido 2 numeros positivos");
        printf("La suma de variable negativas es: %d \n", num3);
        printf("Se han introducido 1 numero negativo");
    }
    else if ((num1 >= 0) && (num2 < 0) && (num3 >= 0))
    {
        printf("La suma de variable es: %d \n", num1 + num3);
        printf("Se han introducido 2 numeros positivos");
        printf("La suma de variable negativas es: %d \n", num2);
         printf("Se han introducido 1 numero negativo");
    }
    else if ((num1 < 0) && (num2 >= 0) && (num3 >= 0))
    {
        printf("La suma de variable es: %d \n", num2 + num3);
        printf("Se han introducido 2 numeros positivos");
        printf("La suma de variable negativas es: %d \n", num1);
         printf("Se han introducido 1 numero negativo");
    }
    else if ((num1 >= 0) && (num2 < 0) && (num3 < 0))
    {
        printf("La suma de variable es: %d \n", num1);
        printf("Se han introducido 1 numero positivo");
        printf("La suma de variable negativas es: %d \n", num3 + num2);
         printf("Se han introducido 2 numero negativo");
    }
    else if ((num1 < 0) && (num2 < 0) && (num3 >= 0))
    {
        printf("La suma de variable es: %d \n", num3);
        printf("Se han introducido 1 numero positivo");
        printf("La suma de variable negativas es: %d \n", num1 + num2);
        printf("Se han introducido 2 numero negativo");
    }
    else if ((num1 < 0) && (num2 >= 0) && (num3 < 0))
    {
        printf("La suma de variable es: %d \n", num2);
           printf("Se han introducido 1 numero positivo");
        printf("La suma de variable negativas es: %d \n", num1 + num3);
        printf("Se han introducido 2 numero negativo");
    }
    else if ((num1 < 0) && (num2 < 0) && (num3 < 0))
    {
        printf("La suma de variable negativas es: %d \n", num1 + num3 + num2);
        printf("Se han introducido 3 numeros negativos");
    }

    else
    {
        printf("No se esta considetando una condicion \n");
    }
    system("pause");
}