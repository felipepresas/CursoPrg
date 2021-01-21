/* Vamos a crear un pequeño programa en C que me pida 2 numeros 
y a partir de ellos realizar las siguientes tareas (cada una en una función diferente)
Sumar dos numeros, restar dos numeros, raiz cuadrada de uno de ellos, cubo de uno de ellos */
#include <stdio.h>
#include <string.h>
#include <math.h>

int sumar(int, int);
int restar(int, int);
double raizSq(int);
int cuboPo(int);

int main (){
    int num1,num2;
    printf("indique el numero");
    scanf("%d",&num1);
    printf("indique el numero");
    scanf("%d",&num2);
    
    
    printf("la suma es %d \n",sumar(num1,num2));
    printf("la resta es %d \n",restar(num1,num2));
    printf("la raiz es %.2f \n",raizSq(num1));
    printf("la cubo es %d \n",cuboPo(num1));
 
    system("pause");
}

int sumar(int num1,int num2) {
    
return num1 + num2;
}

int restar(int num1,int num2) {
return num1-num2;
}

double raizSq(num1) {
return sqrt (num1);
}

int cuboPo(num1) {
return pow (num1,3);
}