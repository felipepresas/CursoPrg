/* Vamos a crear un programa en C que pida 5 cadenas por teclado,
 y cree una sexta cadena resultado de concatenar las iniciales 
 de las 5 introducidas y una septima resultado de concatenar las
  5 introducidas (completas) */
  #include<stdio.h>
  #include<string.h>
  int main (){
      char cad1[20],cad2[20],cad3[20],cad4[20],cad5[20];
      char inicialaux[10]="";
      char iniciales[10]="", todasPalabras[100]="";
      printf("Indique palabra 1");
      gets(cad1);
      printf("Indique palabra 2");
      gets(cad2);
      printf("Indique palabra 3");
      gets(cad3);
      printf("Indique palabra 4");
      gets(cad4);
      printf("Indique palabra 5");
      gets(cad5);
      
      inicialaux[0]=cad1[0];
      strcat(iniciales,inicialaux);
      inicialaux[0]=cad2[0];
      strcat(iniciales,inicialaux);
      inicialaux[0]=cad3[0];
      strcat(iniciales,inicialaux);
      inicialaux[0]=cad4[0];
      strcat(iniciales,inicialaux);
      inicialaux[0]=cad5[0];
      strcat(iniciales,inicialaux);

      strcat(todasPalabras,cad1);
      strcat(todasPalabras,cad2);
      strcat(todasPalabras,cad3);
      strcat(todasPalabras,cad4);
      strcat(todasPalabras,cad5);

      printf("La palabra 6 es:%s\n",iniciales);
      printf("La palabra 7 es:%s\n",todasPalabras);

      system("pause");

  }