#include<stdio.h>
int main (){
    int numero;

printf("Indique el numero del 1 al 10");
scanf("%d",&numero);
    
switch (numero){
    case 1:
        printf("\nTu numero es UNO\n");
        break;
    case 2:
        printf("\nTu numero es DOS\n");
        break;
    case 3:
        printf("\nTu numero es TRES\n");
        break;
    case 4:    
        printf("\nTu numero es Cuatro\n"); 
    break;
        case 5:
        printf("\nTu numero es CINCO\n");
    break;
        case 6:
        printf("\nTu numero es SEIS\n");
    break;
        case 7:
        printf("\nTu numero es SIETE\n");
    break;
        case 8:
        printf("\nTu numero es OCHO\n");
    break;
        case 9:
        printf("\nTu numero es NUEVE\n");
    break;
        default:printf("\nTu numero es DIEZ\n");
    break;
 system("pause");   
        };
}