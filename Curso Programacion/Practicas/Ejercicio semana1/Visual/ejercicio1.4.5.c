# include <stdio.h>

int main (){
    float num1, num2;
    printf("Vamas a mostrar las notas del Alumno\n");
    printf("Introducir nota 1: ");
    scanf("%f",&num1);
    printf("Introducir nota 2: ");
    scanf("%f",&num2);
    printf("Las notas del alumno son %.2f y %.2f ",num1,num2);
    printf("La media del alumno es: %.2f  ",(num1+num2)/2);
}