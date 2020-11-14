#include <stdio.h>
int main (){
  int tiempo;

  printf("Indique los minutos de llamada: ");
  scanf("%d",&tiempo);

  printf("\nCoste fijo de llamada: 12ctms");
  printf("\nCoste por minutos de llamada: %.2f",0.18*tiempo);
  printf("\nCoste total:%.2f",(0.18*tiempo)+0.12);
  printf("\nDescuento:%.2f",((0.18*tiempo)+0.12)*0.2);
  printf("\nTotal pagar llamada:%.2f",((0.18*tiempo)+0.12)*.8);
 
}
