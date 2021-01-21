#include <stdio.h>

int main (){
    int mes;

    printf("Introduzca el numero de mes: ");
    scanf("%d",&mes);

    if (mes<1 || mes>12){
        printf("El mes introducido incorrecto");
    }

    switch (mes){
        case 1:
            printf("Enero\n"); 
            break;
        case 2:
            printf("Febrero\n"); 
            break;
        case 3:
            printf("Marzo\n"); 
            break;
        case 4:
            printf("Abril\n"); 
            break;
        case 5:
            printf("Mayo\n"); 
            break;
        case 6:
            printf("Junio\n"); 
            break;      
        case 7:
            printf("Enero\n");
            break;
        case 8:
            printf("Febrero\n"); 
            break;
        case 9:
            printf("Marzo\n"); 
            break;
        case 10:
            printf("Abril\n");
            break;
        case 11:
            printf("Mayo\n");
            break;
        case 12:
            printf("Junio\n"); 
            break;    
    default:
        break;
    }
    
 system("pause");
    
}