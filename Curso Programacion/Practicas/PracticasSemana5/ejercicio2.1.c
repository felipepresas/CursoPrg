
/* Vamos a generar un programa en C que me permita crear un menu que nos pedira lo siguiente
A) Introducir nuestros datos
B) Introducir nuestra edad
C) Introducir la fecha de caducidad del DNI
D) Fecha de nacimiento
E) Salir */
#include <stdio.h>
int main()
{
    char menu1,datos[50],minuscula;
    int edad,caducidaddia,caducidadmes,fechadia,fechames,fechaano;
    printf("Indique una opcion del menu: \nA)Introducir nuestro datos \nB) Introducir nuestra edad\nC) Introducir la fecha de caducidad del DNI\nD) Fecha de nacimiento\nE) Salir\n");
    scanf("%c", &menu1);
    minuscula = tolower(menu1);

    if (minuscula == 'a')
    {
        printf("introducir nuestros datos:\n");
        scanf("%c",&datos);
        printf("Tus datos son:%c\n",datos);
    }
    else if (minuscula == 'b')
    {
        printf(" Introducir nuestra edad\n");
        scanf("%d",&edad);
        printf("Tus datos son:%d\n",edad);
    }
    else if (minuscula == 'c')
    {
        printf(" Introducir la fecha de caducidad del DNI\n");
        scanf("%d/%d",&caducidaddia,&caducidadmes);
        printf(" Tu fecha de caducidad del DNI es:%d/%d\n",caducidaddia,caducidadmes);
    }
    else if (minuscula == 'd')
    {
        printf("Indicar la fecha de nacimiento\n");
        scanf("%d/%d/%d",&fechadia,&fechames,&fechaano);
        printf("La fecha de nacimeinto es:%d/%d/%d\n",fechadia,fechames,fechaano);
    }
    else if (minuscula == 'e')
    {
        return (0);
    }
    else
    {
        printf("Error 404\n");
    }
    system("pause");
}