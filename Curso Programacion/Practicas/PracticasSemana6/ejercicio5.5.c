#include <stdio.h>
int main (){
    int i;
    char palabra[100],copia[sizeof(palabra)];
    printf("Indique la palabra: ");
    gets(palabra);
   
    for ( i = 0; i < sizeof(palabra) ; i++)
    {
        if (palabra[i]==' ')
        {
            i=sizeof(palabra);
        }
        else
        {
           copia[i]=palabra[i];
        } 
    }
    printf("Palabra es:%s Copia es:%s \n",palabra,copia);
    
    getchar();
}