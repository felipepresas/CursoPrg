#include <stdio.h>
int main (){
  float nota1,nota2,nota3;

  printf("Introduzca las notas: ");
  scanf("%f %f %f",&nota1,&nota2,&nota3);

  printf("La media de las notas es: %.2f",(nota1+nota2+nota3)/3);
}
