/* 9 planetas: mercurio, venus, tierra, marte, jupiter, saturno, urano, neptuno, pluton
El usuario elige uno de los numeros del planeta, y el sistema
 devuelve la distancia media de dicho al sol (en millones de km)
1- 59
2- 108
3- 150
4- 228
5- 750
6- 1431
7- 2877
8- 4509
9- 5916
A) Version con IF's
de 53173186S_OrtoVazquez Souto a todos:    10:19 AM
*/

#include <stdio.h>

int main (){

    char p1[40]="1 mercurio ",p2[40]="2 venus",p3[40]="3 tierra",
    p4[40]="4 marte",p5[40]="5 jupiter",p6[40]="6 saturno",p7[40]="7 urano",
    p8[40]="8 neptuno",p9[40]="9 pluton";
    int elegido;

    printf("\t\t\t\t\tListado de Planetas\n");
    
    printf("Elige uno de los planetas son : \n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n",p1,p2,p3,p4,p5,p6,p7,p8,p9);
    scanf("%d",&elegido);
    system("cls");

    if (elegido<1 || elegido>9){
        printf("No se encuentra entre los elegidos:\n");
    }
    else if (elegido==1){
        printf("%s 59 millones de km\n",p1);
    }
    else if (elegido==2){
        printf("%s 108 millones de km\n",p2);
    }
    else if (elegido==3){
        printf("%s 150 millones de km\n",p3);
    }
    else if (elegido==4){
        printf("%s 228 millones de km\n",p4);
    }
    else if (elegido==5){
        printf("%s 750 millones de km\n",p5);
    }
    else if (elegido=6){
        printf("%s 1431 millones de km\n",p6);
    }
    else if (elegido==7){
        printf("%s 2877 millones de km",p7);
    }
    else if (elegido==8){
        printf("%s 4509 millones de km\n",p8);
    }
    else {
        printf("%s 5916 millones de km\n",p9);
    }
    system("pause");
}
