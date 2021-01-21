/* Vamos a crear un programa que pida un numero
 y que devuelva ese numero en asterisco */

 #include <stdio.h>
 int main (){
     int i ,num;
     printf("Indique el numero: ");
     scanf("%d",&num);

     for ( i = 0; i < num; i++)
     {
          printf("*");
     }
     printf("\n");
     
     system("pause");
 }