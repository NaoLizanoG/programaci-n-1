//Naomi Lizano
//39.Utilizando el concepto de ciclo, generar la serie de Fibonacci hasta llegar o sobrepasar el número 10000.
#include<stdio.h>


int main(){

//variables
 int  nf1, nf2, nf, contador;
 
 //se definen los dos primeros numeros de la serie que no son resultado de ninguna suma anterior
  nf1=0;
  printf("%i\n",nf1);

  nf2=1;
  printf("%i\n",nf2);

//sentencia para calcular los numeros subisguientes de la serie
   for(contador=3; contador<=22;contador++){
    nf= nf1 + nf2;
    printf("%i\n",nf);
    nf1 = nf2;
    nf2 = nf;
  }
return 0;
 }