#include <stdio.h>
#include <string.h>

int validar(char*);

int main (){
    char elNombre[10];
    printf("Indique un nombre\n");
    gets(elNombre);
    
    if (validar(elNombre)==1)
    {
      printf("\nHas introducido tu nombre \n");
    }
    else
    {
        printf("\nNo has introducido tu nombre\n");
    }
     system("pause");
}

int validar(char* nombre){
   const char miNombre[8] ="felipe";
   
   if (strcmp(nombre,miNombre)==0)
   {
       return 1;
   }
   else
   {
       return 0;
   }
  
}
