/* Realizar un programa en C que resuelva los siguientes puntos
- Mostrar un menu con las siguientes opciones
A) Calcular hipotenusa de un triangulo
B) Superficie de una circunferencia
C) Perímetro de una circunferencia
D) area de un rectangulo E) area de un triangulo F) salir
Previamente a este menu, se pedirá un parámetro: 
la figura con la que trabajar que puede ser triangulo,
 rectangulo o circunferencia */
#include <stdio.h>
#include <math.h>
#include <string.h>
# define M_PI 3.141592653589793238462 //pi
int main()
{
    float base, altura,catetoa,catetob,radio;
    char figura, minuscula;
    int menu;
    printf("Elige la inicial de la figura en la que trabajar:");
    scanf("%c", &figura);
    minuscula = tolower(figura);
    switch (minuscula)
    {
    case 't':
        printf("1.-Calcular hipotenusa de un triangulo\n");
        printf("2.-Area de un triangulo\n");
        printf("3.-Salir\n");
        printf("Indique una opcion del menu: \n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            printf("\t\t\t\t---El calculo de la hipotenusa----\n");
            printf("Indique valor del cateto a:");
            scanf("%f",&catetoa);
            printf("Indique valor del cateto b:");
            scanf("%f",&catetob);
            printf("La hipotenusa es:%.2f \n",sqrt((pow(catetoa,2)) +(pow(catetob,2))));
            break;
        case 2:
            printf("\t\t\t\t---Area de un triangula---");
            printf("Indique valor del cateto a:");
            scanf("%f",&catetoa);
            printf("Indique valor del cateto b:");
            scanf("%f",&catetob);
            printf("El area es:%.2f \n",(catetoa*catetob)/2);
            break;
        case 3:
            printf("Correr mientras puedas");
            break;
        default:
            printf("Error 404\n");
            break;
        }
        break;
    case 'r':
        printf("1.-Area de un rectangulo\n");
        printf("2.-Salir\n");
        printf("Indique una opcion del menu: \n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            printf("\t\t\t\t---Area de un rectangulo ---\n");
            printf("Indique valor del cateto a:");
            scanf("%f",&catetoa);
            printf("Indique valor del cateto b:");
            scanf("%f",&catetob);
            printf("El area es:%.2f \n",catetoa*catetob);
            break;
        case 2:
            printf("Correr mientras puedas\n");
            break;
        default:
            printf("Error 404\n");
            break;
        }
        break;
    case 'c':
        printf("1.-Superficie de una circunferencia\n");
        printf("2.-Perimetro de una circunferencia\n");
        printf("3.Salir\n");
        printf("Indique una opcion del menu: \n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            printf("\t\t\t\t---La superficie de la circunferencia ---\n");
            printf("Indique valor del radio:");
            scanf("%f",&radio);
            printf("La superficie es:%.2f",pow(radio,2)*M_PI);   
            break;
        case 2:
            printf("\t\t\t\t---El perimetro de una circunferencia\n---");
            printf("Indique valor del radio:");
            scanf("%f",&radio);
            printf("El perimetro es:%.2f",2*M_PI*radio);
            break;
        case 3:
            printf("Correr mientras puedas\n");
            break;
        default:
            printf("Error 404\n");
            break;
        }
    default:
        printf("No se encuentra esa figura\n");
        break;
    }
    system("pause");
}