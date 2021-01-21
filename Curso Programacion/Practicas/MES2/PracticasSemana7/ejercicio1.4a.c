/* Vamos a introducir una cadena y 
devolveremos la cadena sin espacios */
#include <stdio.h>
int main (){
    int i;
    char palabra[100],copia[sizeof(palabra)];
    printf("Indique la palabra: ");
    gets(palabra);
    for ( i = 0; i < palabra[i] != '\0' ; i++)
    {
        if (palabra[i]==' ')
        {
            i=i+1;
        }
        copia[i]=palabra[i];
    }
    for ( i = 0; i < copia[i] != '\0'; i++)
    {
       printf("%c",copia[i]);
    }
    printf("\nPalabra es:%s \nCopia es:%s \n",palabra,copia);
    getchar();
}