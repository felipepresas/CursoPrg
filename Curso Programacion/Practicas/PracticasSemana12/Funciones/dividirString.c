#include <stdio.h>
#include <string.h>
 
int main(){
	int i=0;
    char cadena[] = "Hola alumnos de clase de PSI";
    char delimitador[] = " ";
    char *token = strtok(cadena, delimitador);
    if(token != NULL){
        while(token != NULL){
            // S�lo en la primera pasamos la cadena; en las siguientes pasamos NULL
            printf("Token %d: %s\n", i, token);
            token = strtok(NULL, delimitador);
            i++;
        }
    }
    return 0;
}
