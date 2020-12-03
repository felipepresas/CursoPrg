/* #include<stdio.h>
int main (){
    int num1,num2,num3;
    printf("\t\t\t\tPrograma que detecta si el tercero vale lo mismo\n");
    printf("Indique numero 1:");
    scanf("%d",&num1);
    printf("Indique numero 2:");
    scanf("%d",&num2);
    printf("Indique numero 3:");
    scanf("%d",&num3);
    
    if (num3==num1+num2)
    {
        printf("El tercer valor vale lo mismo que la suma de los dos primeros");
    }
    else
    {
        printf("El tercer valor es diferente");
        
    }
    
    system("pause");
} */

/* #include<stdio.h>
int main (){
    int menu;
    printf("\t\t\t\tPrograma que selecciona un menu de opciones\n");
    printf("Seleccion con el numero la opcione del menu \n1.Buscar\n2.Archivo\n3.Guardar\n");
    scanf("%d",&menu);

    switch (menu)
    {
    case 1:
        printf("Has elegido Buscar\n");
        break;
    case 2:
        printf("Has elegido Archivo\n");
        break;
    case 3:
        printf("Has elegido Guardar\n");
        break;
    default:printf("Hubo un error\n");
        break;
    }
    system("pause");
} */

/* #include <stdio.h>
int main()
{
    int menu;
    printf("\t\t\t\tPrograma que selecciona un tipo de bomba\n");
    printf("Seleccion el tipo de bomba\n");
    scanf("%d", &menu);

    switch (menu)
    {
    case 0:
        printf("No hay establecido un valor definido para el tipo de bomba\n");
        break;
    case 1:
        printf("La bomba es una bomba de agua\n");
        break;
    case 2:
        printf("La bomba es una bomba de gasolina\n");
        break;
    case 3:
        printf("La bomba es una bomba de hormigon\n");
        break;
    case 4:
        printf("La bomba es una bomba de pasta alimenticia\n");

        break;
    default:
        printf("No existe un valor valido para tipo de bomba\n");
        break;
    }
    system("pause");
} */

#include <stdio.h>
#include <string.h>
int main()
{
    const char alimento[6] = "Arrot";
    char copia[6];
    printf("\t\t\t\tPrograma que copia una cadena\n");
    strcpy(copia, alimento);
    printf(" Variable alimento: %s \n", alimento);
    printf(" Variable copia: %s \n", copia);
    printf(" Variable copia modificado: %c%c%c%cz \n", copia[0], copia[1], copia[2], copia[3]);
    system("pause");
}