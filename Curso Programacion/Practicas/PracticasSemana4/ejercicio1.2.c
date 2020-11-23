#include <stdio.h>
#include <math.h>
int main()
{
    float peso, altura, imc;
    char nombre[20];

    printf("Indique su nombre: ");
    gets(nombre);
    printf("Indique su peso: ");
    scanf("%f", &peso);
    printf("Indique su altura: ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    printf("Tu nombre es:%s \n", nombre);

    if (peso < 0 || altura < 0)
    {
        printf("Has introducido un valor negativo");
    }
    else
    {
        if (imc <= 18.5)
        {
            printf("Estado Bajo Peso\n");
        }
        else if (imc > 18.5 && imc <= 24.9)
        {
            printf("Estado Normal\n");
        }
        else if (imc >= 25 && imc <= 29.9)
        {
            printf("Estado Pre-obesidad o Sobrepeso\n");
        }
        else if (imc >= 30 && imc <= 34.9)
        { 
            printf("Estado Obesidad clase I\n");
        }
        else if (imc >= 35 && imc <= 39.9)
        {
            printf("Estado Obesidad clase II\n");
        }
        else
        {
            printf("Estado Obesidad clase III");
        }
    }

    system("pause");
}