//Naomi Lizano
//39.Utilizando el concepto de ciclo, generar la serie de Fibonacci hasta llegar o sobrepasar el número 10000.
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"");
 int  nf1, nf2, nf, contador;

  nf1=0;
  printf("%i\n",nf1);

  nf2=1;
  printf("%i\n",nf2);

   for(contador=3; contador<=20;contador++){
    nf= nf1 + nf2;
    printf("%i\n",nf);
    nf1 = nf2;
    nf2 = nf;
  }
getch();
return 0;
 }