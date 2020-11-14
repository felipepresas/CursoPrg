#include <stdio.h>
int main (){
    int edad1, edad2;
    float nota1, nota2;

    printf("\n#######################################################################################################################");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                               Felipe Presas Martinez                                                #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                               Curso PSI Programacion                                                #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                  Practica numero1                                                   #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                                                                                     #");
    printf("\n#                                                                                                                     #");
    printf("\n####################################################################################################################### \n\n\n");

    // Suma de 2 numeros enteros 
    printf("\n\t\t\t\t\t Indica la edad del alumno1:");
    scanf("%d", &edad1);
    printf("\n\t\t\t\t\t La edad del alumno es :%d\n",edad1);
    printf("\n\t\t\t\t\t Indica la edad del alumno2:");
    scanf("%d", &edad2);
    printf("\n\t\t\t\t\t La edad del alumno es :%d \n",edad2);
    printf("\n\t\t\t\t\t La edad de los 2 alumnos es : %d \n\n\n",edad1+edad2);


    // suma de 2 numeros decimales
    printf("\n\t\t\t\t\t Indica la nota del alumno1:");
    scanf("%f", &nota1);
    printf("\n\t\t\t\t\t La nota del alumno es :%.3f \n",nota1);
    printf("\n\t\t\t\t\t Indica la nota del alumno2:");
    scanf("%f", &nota2);
    printf("\n\t\t\t\t\t La edad del alumno es :%.3f \n",nota2);
    printf("\n\t\t\t\t\t El resultado notas : %.3f \n\n\n\n",nota1+nota2);


    system("pause");
}
