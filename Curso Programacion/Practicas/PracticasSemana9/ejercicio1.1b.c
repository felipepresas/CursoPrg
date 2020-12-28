/* a) Concatenar
b) Comparar
c) Transformar
d) Salir
Por una lado: el menu se va a mostrar seguido hasta que se
 seleccione una opcion correcta
Por otro lado: se va a trabajar con una cadena introducida 
por teclado. El valor de esa cadena es INAMOVIBLE
Definicion de cada opcion
a) debe concatenar la cadena original en otra. El resultado
 será del tipo: La cadena introducida es
Ojo!!! No vale trampear la cadena con un prinft ni similares
b) debemos comparar la cadena con nuestro nombre. Si el 
resultado es el mismo, debemos mostrar el mensaje: "cadenas iguales"
 si no, el mensaje "cadenas diferentes". Dicho resultado debe ir 
 acompañado con la comparacion
c)Transformamos la cadena en mayusculas y minusculas. AMBAS. mostramos
la cadena original y la cadena transformada
d) Salir con un mensaje de despedida
Ojo: el menu y la seleccion de la opcion irán en una pantalla. SOLAMENTE CONTENDRÁ ESTO
Los resultados irán en una pantalla diferente
El menu SOLO DEBE MOSTRARSE UNA VEZ */
#include <stdio.h>
#include <string.h>

int main()
{
    const char miNombre[6] = "Felipe";
    char cadena[50], cadenaConcatenar[50], cadMay, cadMin;
    char menu;
    int i;

    printf("Menu\n");
    printf("a- Concatenar\n");
    printf("b- Comparar\n");
    printf("c- Transformar la cadena en mayuscula y minuscula\n");
    printf("d- Salir\n");
    printf("\nIntroduzca una opcion del menu segun la letra:");
    scanf("%c", &menu);
    system("cls");
    while (menu == 'a' || menu == 'b' || menu == 'c' || menu == 'd')
    {
        if (menu == 'a')
        {
            printf("Selecciono concatenar la cadena original\n");
            fflush(stdin);
            printf("\nIndique la cadena original\n");
            gets(cadena);
            printf("\nIndique la cadena concatenar\n");
            gets(cadenaConcatenar);
            fflush(stdin);

            for (i = 0; i < strlen(cadenaConcatenar); i++)
            {
                cadena[strlen(cadena)] = cadenaConcatenar[i];
                printf("La cadena es: %s\n", cadena);
                printf("La posicion es: %d\n", i);
                printf("La posicion es: %d\n", cadena[strlen(cadena) + i]);
                printf("La posicion es: %c\n", cadenaConcatenar[i]);
                printf("La cadena es: %s\n", cadena);
            }
            printf("La cadena es: %s\n", cadena);

            getchar();
            system("cls");
            printf("Menu\n");
            printf("a- Concatenar\n");
            printf("b- Comparar\n");
            printf("b- Transformar la cadena en mayuscula y minuscula\n");
            printf("c- Salir\n");
            printf("\nIntroduzca una opcion del menu segun la letra:");
            scanf("%c", &menu);
            system("cls");
        }
        else if (menu == 'b')
        {
            printf("Selecciono  comparar la cadena con nuestro nombre");
            fflush(stdin);
            printf("\nIndique la cadena a comparar\n");
            gets(cadena);
            fflush(stdin);
            if (strcmp(cadena, miNombre) == 0)
            {
                printf("La cadena es igual a tu nombre\n Nombre:%s,Cadena:%s", miNombre, cadena);
            }
            else
            {
                printf("La cadena es diferente a tu nombre\n Nombre:%s,Cadena:%s", miNombre, cadena);
            }
            getchar();
            system("cls");
            printf("Menu\n");
            printf("a- Concatenar\n");
            printf("b- Comparar\n");
            printf("b- Transformar la cadena en mayuscula y minuscula\n");
            printf("c- Salir\n");
            printf("\nIntroduzca una opcion del menu segun la letra:");
            scanf("%c", &menu);
            system("cls");
        }
        else if (menu == 'c')
        {
            printf("Selecciono  transformamos la cadena en mayusculas y minusculas\n");
            fflush(stdin);
            gets(cadena);
            printf("Cadena en mayuscula es: %s\n", strupr(cadena));
            printf("Cadena en minuscula es: %s\n", strlwr(cadena));
            getchar();
            system("cls");
            printf("Menu\n");
            printf("a- Concatenar\n");
            printf("b- Comparar\n");
            printf("b- Transformar la cadena en mayuscula y minuscula\n");
            printf("c- Salir\n");
            printf("\nIntroduzca una opcion del menu segun la letra:");
            scanf("%c", &menu);
            system("cls");
        }
        else if (menu == 'd')
        {
            printf("Selecciono salir");
            fflush(stdin);
            getchar();
            return 0;
        }
        else
        {
            printf(" Error 404\n");
        }
        system("cls");
    }
    system("pause");
}