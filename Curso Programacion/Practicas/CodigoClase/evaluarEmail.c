#include <stdio.h>
#include <string.h>
int comprobarEmail(char *);

int main(){
	char email[50];
	printf("Introduce un email: ");
	gets(email);
	if(comprobarEmail(email)==0)
		printf("\nEmail erroneo");
	else printf("\nEmail correcto");
	return 0;
}

int comprobarEmail(char *email){
	int i=0,aciertos=0;
	char *parte;
	printf("Email introducido: %s",email);
	while(email[i]!='\0'){
		if(email[i]=='@')
			aciertos++;
		i++;
	}
	if(aciertos!=1){
		printf("\nNo hay @");
		return 0;
	}
	else{
		parte = strtok(email,"@");
		printf("\n1-Cadena : %s",parte);
		parte = strtok(NULL,"@");
		printf("\n2-Cadena : %s",parte);
		parte = strtok(parte,".");
		printf("\n3-Cadena : %s",parte);
		parte = strtok(NULL,".");
		printf("\n4-Cadena : %s",parte);
		if (strcmp(parte,"com")==0||strcmp(parte,"es")==0)
			return 1;
		else
			return 0;
		}
}
