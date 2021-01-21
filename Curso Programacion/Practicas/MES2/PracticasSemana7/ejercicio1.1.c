//Emular STRLWR transformar una cadena minuscula
/* #include <stdio.h>
#include <string.h>
int main (){
    char palabra[50],minuscula[sizeof(palabra)];
    int i;
    printf("Indique la palabra:");
    gets(palabra);
    
    for ( i = 0; i < strlen(palabra); i++)
    {
       minuscula[i]= tolower(palabra[i]);
    }
    printf("La palabra en minuscula es:%s : \n",minuscula);
    
    getchar();
} */
#include <stdio.h>
#include <string.h>
int main()
{
    char palabra[50], minuscula;
    int i, codigo;
    printf("Indique la palabra:");
    gets(palabra);
    for (i = 0; i < strlen(palabra); i++, codigo++)
    {
        for (codigo = 65; codigo < 90; codigo++)
        {
            if (palabra[i] == codigo)
            {
                minuscula=palabra[i] + 32;
                printf("%c - %c\n", codigo,palabra[i]);
                printf("%c \n", minuscula);
            }
        }
    }
    printf("La palabra en minuscula es:%s : \n", minuscula);
    getchar();
} 
