/* Vamos a crear un programa que pida 2 rangos 
(limite inferior y limite superior) y muestre
 todos los numeros entre esos rangos y diga cuantos hay */
 #include <stdio.h>
 int main (){
     int i , num1, num2,cont=0;
     printf("Indique el limite inferior:");
     scanf("%d",&num1);
     printf("Indique el limite superior:");
     scanf("%d",&num2);

     for ( i = num1; i <= num2; i++,cont++)
     {
        printf("Los numeros son : %d\n",i);
     }
     printf("La cantidad de numeros son%d \n",cont);
     
     system("pause");
 }