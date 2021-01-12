/* Vamos a crear un programa que va a ser un utilitario de funciones matematicas
Suma, resta, multiplicacion, division, espar, ver si es multiplo de 2
Ver si es positivo o negativo
Nuestro programa va a ser un menu que pida estas opciones:
a) suma b) resta c)multiplicacion d)division e) espar f)multiplode 3 g)positivo
h) salir
El menu solo debe aceptar una letra correspondiente a una
opcion válida (tanto en mayusculas como en minusculas).
Una vez que accedemos a la funcion, debe realizar su tarea
Si seleccionamos la opción salir, debe preguntarnos si estamos 
seguros; si decimos que si, se acaba el programa. Si decimos que no, volvemos al menu
La primera vez que se ejecuta, mostrará una caratula del tipo "FUNCIONES MATEMÁTICAS"
Pero solo la primera vez
No es necesario limpiar pantall */
#include <stdio.h>
#include <string.h> //

int main()
{
    int num1, num2, i, total;
    char menu = ' ';

    while (menu != 'a' || menu != 'b' || !menu != 'c' || menu != 'd' || menu != 'e' || menu != 'f' || menu != 'g' || menu != 'h')
    {
        printf("\nFunciones matematicas \n");
        printf("a) suma\n");
        printf("b) resta\n");
        printf("c) multiplicacion\n");
        printf("d) division\n");
        printf("e) espar\n");
        printf("f)multiplode 3\n");
        printf("g)positivo\n");
        printf("h) salir\n");
        printf("Seleccione una opcion del menu\n");
        scanf("%c", &menu);
        fflush(stdin);
        menu = tolower(menu);

        if (menu == 'a')
        {
            printf("\nIndique numeros para sumar\n");
            printf("Indique el primer numero\n");
            scanf("%d", &num1);
            printf("Indique el segundo numero\n");
            scanf("%d", &num2);
            total = num1 + num2;
            printf("Resultado es:%d", total);
        }
        else if (menu == 'b')
        {
            printf("Indique numeros para restar\n");
            printf("Indique el primer numero\n");
            scanf("%d", &num1);
            printf("Indique el segundo numero\n");
            scanf("%d", &num2);
            total = num1 - num2;
            printf("Resultado es:%d", total);
        }
        else if (menu == 'c')
        {
            printf("Indique numeros para multiplicar\n");
            printf("Indique el primer numero\n");
            scanf("%d", &num1);
            printf("Indique el segundo numero\n");
            scanf("%d", &num2);
            total = num1 * num2;
            printf("Resultado es:%d", total);
        }
        else if (menu == 'd')
        {
            printf("Indique numeros para division\n");
            printf("Indique el primer numero\n");
            scanf("%d", &num1);

            printf("Indique el segundo numero\n");
            scanf("%d", &num2);
            total = num1 / num2;
            printf("Resultado es:%d", total);
        }
        else if (menu == 'e')
        {
            printf("Indique numero para indicar si es par\n");
            printf("Indique el primer numero\n");
            scanf("%d", &num1);
            total = num1 % 2;
            if (total == 0)
            {
                printf("Resultado es par");
            }
            else
            {
                printf("Resultado es impar");
            }
        }
        else if (menu == 'f')
        {
            printf("Indique numero para saber si es multiplo de 3\n");
            printf("Indique el primer numero\n");
            scanf("%d", &num1);
            total = num1 % 3;
            if (total == 0)
            {
                printf("Resultado es multiplo de 3");
            }
            else
            {
                printf("Resultado no es multiplo");
            }
        }
        else if (menu == 'g')
        {
            printf("Indique numero para indicar positivo\n");
            printf("Indique el primer numero\n");
            scanf("%d", &num1);
           
            if (num1 >= 0)
            {
                printf("Resultado es positivo");
            }
            else
            {
                printf("Resultado es negativo");
            }
        }
        else if (menu == 'h')
        {
            printf("Seguro que desea Salir?(s/n)\n");
            scanf("%c", &menu);
            fflush(stdin);
            if (menu == 's')
            {
                return 0;
            }
            else if (menu == 'n')
            {
                menu=' ';
            }
            else
            {
               printf("\nOtro caracter no contemplado\n");   
            }
        }
        else
        {
         printf("\n Otra opcion no contemplado \n");
        }
    }
    system("pause");
}