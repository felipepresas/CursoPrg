/* Vamos a emular el funcionamiento de la funcion STRCMP */

#include <stdio.h>
int main (){
    int i;
    char palabra[30],copia[sizeof(palabra)];
    printf("Indique la palabra: ");
    gets(palabra);
    
    for ( i = 0; i < sizeof(palabra) ; i++)
    {
        copia[i]=palabra[i];
    }
    printf("Palabra es:%s Copia es:%s \n",palabra,copia);
    getchar();
}