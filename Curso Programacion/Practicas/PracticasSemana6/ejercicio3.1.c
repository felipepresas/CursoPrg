/* Vamos a crear un pequeño programa en C que nos 
permita recoger 3 notas, visualizarlas al reves
 */
#include<stdio.h>
int main (){
        int notas[2];
        int i=0;
        for ( i = 0; i < 3; i++)
        {
            printf("Indique las notas:");
            scanf("%f",&notas[0]);
        }
        for ( i = 2; i >=0 ; i--)
        {
            printf("Tu nota es:%d \n",notas[i]);              
        }
        system("pause");
}