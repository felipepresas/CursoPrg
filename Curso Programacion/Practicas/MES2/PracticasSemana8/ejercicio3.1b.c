/* Crear un programa que me permita introducir 
numeros seguido mientras el numero introducido 
sea mayor que el anterior. El programa terminará 
cuando introduzcamos un 0 y debe contar el numero 
total de numeros introducidos calcular su suma y
su media */
#include <stdio.h>
#include <string.h>

int main (){
   int i,sumNum=0, num=1;
   for ( i = -1; num !=0 ; i++)
   {
       printf("Introduzca un numero:\n");
       scanf("%d",&num);
       sumNum+=num;
   }
   printf("Numero total numeros es :%d\n",i);
   printf("Lamedia es :%d\n",sumNum/i);
   system("pause");
}