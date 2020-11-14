# include <stdio.h>

int main (){
    float num1, num2,num3,num4;
    printf("Vamas a mostrar las notas de Valeria\n");
    printf("Introducir nota 1: ");
    scanf("%f",&num1);
    printf("Introducir nota 2: ");
    scanf("%f",&num2);
    printf("Introducir nota 3: ");
    scanf("%f",&num3);
    printf("Introducir nota 4: ");
    scanf("%f",&num4);
    printf("Las notas del alumno son %.2f , %.2f , %.2f, %.2f  ",num1,num2,num3,num4);
    printf("La media del alumno es: %.2f  ",(num1+num2+num3+num4)/4);
}
