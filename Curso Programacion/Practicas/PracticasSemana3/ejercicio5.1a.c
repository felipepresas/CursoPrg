/* Si ese nombre es "mi nombre"(el de cada uno) nos 
devolvera un mensaje que diga "X, has introducido tu nombre". 
Si no lo es, dirá: "Tu amigo se llama X" */

#include <stdio.h>
#include <string.h>
int main (){
    char c[6]="felipe";
    char nombre[30];

    printf("Indique su nombre: ");
    gets(nombre);
     printf("%s",c);
     
    if (nombre==c)
    {
        printf("\nHas introducido tu nombre: %s\n",nombre);
    }
    else
    {
        printf("\nTu amigo se llama: %s\n",nombre);        
    }
    system("pause");
    getchar();   
}