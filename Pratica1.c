/* #include<stdio.h>
int main (){
    int numTodoTerreno, numTurismo;
    float capTodoTerreno,capTurismo;

    printf("\t\t\t\tPrograma que permite calcular la necesidad de combustible\n");
    printf("Indique la cantidad de todo terenos:\n");
    scanf("%d",&numTodoTerreno);
    printf("Indique la capacidad en litros del todo terreno:\n ");
    scanf("%f",&capTodoTerreno);
    printf("Indique la cantidad de turismo:\n");
    scanf("%d",&numTurismo);
    printf("Indique la capacidad en litros del todo turismo:\n ");
    scanf("%f",&capTurismo);
    
    printf("La necesidad de combustible total es:%.2f L\n",((numTodoTerreno*capTodoTerreno)+(numTurismo*capTurismo)));
    system("pause");
} */
#include<stdio.h>
int main (){
    float altura,alturacm;
    int edad;
    printf("\t\t\t\tPrograma que permite calcular el peso recomendado\n");
    
    printf("Indique la edad:\n");
    scanf("%d",&edad);
    printf("Indique la altura:\n");
    scanf("%f",&altura);
    
    alturacm=altura*100;
    
    printf("Peso recomendado:%.2f Kg\n",(((alturacm-100)+(0.1*edad))*0.9));
    system("pause");
    
}