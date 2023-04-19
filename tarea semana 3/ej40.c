//Naomi Lizano 
//40. Leer un número de dos dígitos y determinar si pertenece a la serie de Fibonacci.
#include<stdio.h>

int num(int n){
 int nf2=1, nf1=0, contador, resultado;
 resultado =0;
  
    for(contador=3; contador<=22;contador++){
    nf= nf1 + nf2;
    if (n=nf){
        resultado = resultado +1;
    }
    nf1 = nf2;
    nf2 = nf;
    }
    return resultado;
}

int main(){

printf("Escriba que numero desea evaluar \n");
scanf()

}