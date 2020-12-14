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
    printf("Palabra es:%s Copia es:%s \n",palabra,copia);
    getchar();
}