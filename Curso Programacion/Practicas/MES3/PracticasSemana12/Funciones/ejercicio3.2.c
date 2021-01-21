/* Vamos a crear un programa que a traves de una funcion devuelva
 la primera letra de una cadena introducida por teclado */

 #include <stdio.h>
 #include <string.h>
 

 char  dataInUpgrade (char * );
 
 int main (){
     char cadena[20];
     printf("Indique cadena ");
     gets(cadena);


     printf("%c ", dataInUpgrade(cadena));
     system("pause");
 }
 char dataInUpgrade (char * cadena)
 {
     return cadena[0];
 }








 