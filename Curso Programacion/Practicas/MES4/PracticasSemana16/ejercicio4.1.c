/* Vamos a crear un programa que reciba como parametros 3 palabras 
(lo ejecutaremos desde terminal).
Debemos mostrar los 3 argumentos (es decir, las 3 palabras)
Y adicionalmente, cambiar los 3 argumentos y ponerle nuestro nombre (repetido 3 veces)
 */

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]){
    int i;
    if (argc!= 4)
    {
        printf("deben ser 3 argumentos");  
    }
    for (i = 1; i < argc; i++)
    {
        printf("%s\n",argv[i]);
    }
     for (i = 1; i < argc; i++)
    {
        strcpy(argv[i],"felipe");
        printf("%s\n",argv[i]);
    }
    system("pause");
}