/* Vamos a introducir una cadena y 
devolveremos la cadena sin espacios */
#include <stdio.h>
int main (){
    int i,j=0,contspacio;
    char palabra[100],copia[sizeof(palabra)];
    printf("Indique la palabra: ");
    gets(palabra);
    for ( i = 0; i < palabra[i] != '\0' ; i++,j++)
    {
        if (palabra[i]==' ')
        {
            i=i+1;
            contspacio++;
        }
        copia[j]=palabra[i];
    }
    for ( i = 0; i < strlen(palabra)-contspacio; i++)
    {
       printf("%c",copia[i]);
    }
    printf("\nPalabra es:%s \n",palabra);
    getchar();
}