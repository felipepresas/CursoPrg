/* Vamos a crear un script en C que realice la siguiente tarea
El profesor va a indicar cuantos examenes ha hecho, 
y el programa pedirá y almacenará (en un array numerico) todas estas notas
Se trata de mostrar:
Las notas introducidas y su media
Examenes hechos: 4
Nota1: 5
Nota2:7
Nota3:  */
#include <stdio.h>
int main (){
    int i, numExa;
    float smedia,notas[10];
    printf("indique numero de examenes:");
    scanf("%d",&numExa);
    for (size_t i = 0; i < numExa; i++)
    {
        printf("indique nota: ");
        scanf("%f",&notas[i]);
        smedia=(smedia+notas[i]);
    }
        for (size_t i = 0; i < numExa; i++)
    {
        printf("Nota es: %.2f \n",notas[i]);
    }
    printf("La media es: %.2f \n",smedia/numExa);
    system("pause");
}