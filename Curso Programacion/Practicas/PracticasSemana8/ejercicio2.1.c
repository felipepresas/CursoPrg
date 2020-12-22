/* Vamos a crear un programa que recoja una palabra y le de la vuelta.
La salida del programa debe mostrar la palabra original 
y la palabra dada la vueltaPor ejemplo:Julio -> oiluJ */
#include <stdio.h>
#include <string.h>
int main (){
    char frase[50],copia[sizeof(frase)],i,j;
    puts("Indique la palabra: ");
    gets(frase);
    
 for (i = 0,j=strlen(frase); i!='\0' ; i++,j--)
 {
     copia[j]=frase[i];
     printf("J%c\n",j);
     printf("I%c\n",i);
     
 }
 
    printf("La frase es: %s\n",frase);
    printf("La copia es: %s\n",copia);
    system("pause");
}