#include <stdio.h>
#include <string.h>
#define titular
#define cabecera

int main(){
	int eval=0, n1=0, n2=0, i=0, ancho=120;
	char opc, seguro='n', titular[50]="PETICION DE DATOS", cabecera[50]="FUNCIONES MATEMATICAS";
		for(i=0;i<(ancho/2)-(strlen(titular)/2);i++){
		printf(" ");
	}
	printf("%s",titular);
	
	printf("\nIntroduce un numero: ");
	scanf("%d",&n1);
	printf("\nIntroduce otro numero: ");
	scanf("%d",&n2);
	system("cls");
	fflush(stdin);
	
	for(i=0;i<(ancho/2)-(strlen(cabecera)/2);i++){
		printf(" ");
	}
	printf("%s\n\n",cabecera);
	do{
		printf("\na) Suma");
		printf("\nb) Resta");
		printf("\nc) Multiplicacion");
		printf("\nd) Division");
		printf("\ne) Es Par");
		printf("\nf) Multiplo de 3");
		printf("\ng) Positivo");
		printf("\nh) Salir");
		printf("\n\nEleccion: ");
		scanf("%c",&opc);
		opc=tolower(opc);
		fflush(stdin);
		
		switch(opc){
			case 'a':
				printf("\nEl valor de n1 es: %d",n1);
				printf("\nEl valor de n2 es: %d",n2);
				printf("\nLa suma vale: %d\n",n1+n2);
				getch();
				break;
			case 'b':
				printf("\nEl valor de n1 es: %d",n1);
				printf("\nEl valor de n2 es: %d",n2);
				printf("\nLa resta vale: %d\n",n1-n2);
				getch();
				break;
			case 'c':
				printf("\nEl valor de n1 es: %d",n1);
				printf("\nEl valor de n2 es: %d",n2);
				printf("\nLa multiplicacion vale: %d\n",n1*n2);
				getch();
				break;
			case 'd':
				printf("\nEl valor de n1 es: %d",n1);
				printf("\nEl valor de n2 es: %d",n2);
				printf("\nLa division vale: %.2f\n",((float)n1/n2));
				getch();
				break;
			case 'e':
				printf("\nEl valor de n1 es: %d",n1);
				printf("\nEl valor de n2 es: %d",n2);
				printf("\nQue numero evaluamos?: ");
				scanf("%d",&eval);
				if(eval==1){
					if(n1%2==0)
						printf("\nEl numero %d es par\n",n1);
					else printf("\nEl numero %d es impar\n",n1);
				}
				else if(eval==2){
					if(n2%2==0)
						printf("\nEl numero %d es par\n",n2);
					else printf("\nEl numero %d es impar\n",n2);
				}
				else printf("\nEsta opcion no esta contemplada\n");
				getch();
				break;
			case 'f':
				printf("\nEl valor de n1 es: %d",n1);
				printf("\nEl valor de n2 es: %d",n2);
				printf("\nQue numero evaluamos?: ");
				scanf("%d",&eval);
				if(eval==1){
					if(n1%3==0)
						printf("\nEl numero %d es multiplo de tres\n",n1);
					else printf("\nEl numero %d no es multiplo de tres\n",n1);
				}
				else if(eval==2){
					if(n2%3==0)
						printf("\nEl numero %d es multiplo de tres\n",n2);
					else printf("\nEl numero %d no es multiplo de tres\n",n2);
				}
				else printf("\nEsta opcion no esta contemplada\n");
				getch();
				break;
			case 'g':
				printf("\nEl valor de n1 es: %d",n1);
				printf("\nEl valor de n2 es: %d",n2);
				printf("\nQue numero evaluamos?: ");
				scanf("%d",&eval);
				fflush(stdin);
				if(eval==1){
					if(n1>0)
						printf("\nEl numero %d es positivo\n",n1);
					else if(n1<0) 
						printf("\nEl numero %d es negativo\n",n1);
					else printf("\nEl numero es el cero\n");
				}
				else if(eval==2){
					if(n2<0)
						printf("\nEl numero %d es negativo\n",n2);
					else if (n2>0)
						printf("\nEl numero %d es positivo\n",n2);
					else printf("\nEl numero es el cero\n");
				}
				else printf("\nOpcion no contemplada\n");
				getch();
				break;
			case 'h':
				printf("Desea salir?(S/N)",seguro);
				scanf("%c",&seguro);
				seguro=tolower(seguro);
				fflush(stdin);
				if(seguro=='s')
					printf("\n\nHasta pronto");
			break;
		}
	}
	while(seguro!='s');
	
	return 0;
}

