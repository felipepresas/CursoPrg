/* CALCULAR LETRA DEL NIF Para verificar el NIF de españoles
residentes mayores de edad, el algoritmo de cálculo del 
dígito de control es el siguiente: Se divide el número
entre 23 y el resto se sustituye por una letra que se 
determina por inspección mediante la siguiente tabla:
RESTO 0 1 2 3 4 5 6 7 8 9 10 11 
LETRA T R W A G M Y F P D X B
RESTO 12 13 14 15 16 17 18 19 20 21 22 
LETRA N J Z S Q V H L C K E 
Por ejemplo, si el número del DNI es 12345678, dividido entre 23
da de resto 14, luego la letra sería la Z: 12345678Z. */
#include <stdio.h>
int main()
{
    int i, dniNum, posNumDni = 0;
    const int divisorDni = 23;
    char letra[23] = "TRWAGMYFPDXBNJZSQVHLCKE";
    printf("Introduzca el dni: ");
    scanf("%d", &dniNum);

    posNumDni = dniNum % divisorDni;

    for (i = 0; i < 22; i++)
    {
        if (i == posNumDni)
        {
            printf("Su letra es :%c\n", letra[i]);
        }
    }
    printf("Posicion del Dni es: %d\n", posNumDni);
    system("pause");
}