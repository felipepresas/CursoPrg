#include <stdio.h>

int peticionDatos();
int positivos(int *,int);

int main(){
	int j=0, i=0,num,numsposi,numeros[200]={0};
	float a, b;
	do{
		num=peticionDatos();
		if(num!=0){
			numeros[i]=num;
			i++;
		}		
	}while(num!=0);

	numsposi=positivos(numeros,i);
	printf("Hay %d positivos y %d negativos",numsposi, i-numsposi);
	return 0;
}

int peticionDatos(){
	int numero;
	printf("Introduce un numero: ");
	scanf("%d",&numero);
	return numero;
}

int positivos(int * numeros, int i){
	int k=0, contpositivos=0;

	for(k=0;k<i;k++){
		if(numeros[k]>0)
			contpositivos++;
	}
	
	return contpositivos;	
}
