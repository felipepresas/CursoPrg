/* Vamos a pedir al usuario que introduzca por teclado la inicial de una de las estaciones del año
El programa debe mostrar como resultado el nombre de la estacion.
A) El programa lo realizaremos con la estructura condicional Switch-Case
B) ¿Sería posible en el switch-case pedir el nombre de la estación y devolver su letra inicial?*/

#include<stdio.h>
int main (){
    char estacion,minuscula;

    printf("Indique la inicial de la estacion: ");
    scanf("%c",&estacion);
    minuscula=tolower(estacion);
    
    switch (minuscula){
        case 'p':
            printf("\nEs primavera\n");
        break;
        case 'v':
            printf("\nEs verano\n");
        break;
        case 'o':
            printf("\nEs oto;o\n");
        break;
        case 'i':
            printf("\nEs invierno\n");
        break;
        default: printf("\nNo se encuentra esa estacion");
        break;
    }
    system("pause");
}