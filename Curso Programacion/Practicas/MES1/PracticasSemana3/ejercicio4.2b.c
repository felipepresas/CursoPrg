/*B) Versión con Switch-Case */

#include <stdio.h>

int main (){

    char p1[40]="1 mercurio ",p2[40]="2 venus",  p3[40]="3 tierra",
         p4[40]="4 marte",    p5[40]="5 jupiter",p6[40]="6 saturno",
         p7[40]="7 urano",    p8[40]="8 neptuno",p9[40]="9 pluton";
    int elegido;

    printf("\t\t\t\t\tListado de Planetas\n");
    printf("Elige uno de los planetas son : \n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n",p1,p2,p3,p4,p5,p6,p7,p8,p9);
    scanf("%d",&elegido);
    system("cls");

    switch (elegido){
        case 1:
            printf("%s 59 millones de km\n",p1);
            break;
        case 2:
            printf("%s 108 millones de km\n",p2);
            break;     
        case 3:
            printf("%s 150 millones de km\n",p3);
            break; 
        case 4:
            printf("%s 228 millones de km\n",p4);
            break;
        case 5:
            printf("%s 750 millones de km\n",p5);
            break;     
        case 6:
            printf("%s 1431 millones de km\n",p6);
            break;
        case 7:
            printf("%s 2877 millones de km",p7);
            break;
        case 8:
            printf("%s 4509 millones de km\n",p8);
            break;     
        case 9:
            printf("%s 5916 millones de km\n",p9);
            break;       
        default:printf(" No tenemos la distancia de momento\n");
            break;    
    }
    system("pause");
}