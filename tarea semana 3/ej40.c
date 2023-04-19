//Naomi Lizano 
//40. Leer un número de dos dígitos y determinar si pertenece a la serie de Fibonacci.
#include<stdio.h>

//funcion para determinar la secuencia de Finobacci
int num(int n1){
 int nf2=1, nf1=0, contador, resultado, nf;
 resultado =0;
  
    for(contador=3; contador<=13;contador++){
    nf= nf1 + nf2;
    if (n1==nf){
        resultado = resultado +1;
    }
    nf1 = nf2;
    nf2 = nf;
    }
    return resultado;
}

int main(){

//variables
int n, r;

//validacion para numeros que no son de dos digitos o son negativos 
do{
printf("Esta programacion unicamente permite evaluar si un numero positivo de dos digitos pertenece a la secuencia de Finobacci \n");
printf("Escriba el numero que desea evaluar \n");
scanf("%d", &n);
} while (n<10||n>=100);

//se invoca la funcion
r=num(n);

//se da el resultado al usuario
if (r==1){
    printf("El numero si pertenece a la secuencia Finobacci");
}
else {
   printf("El numero no pertenece a la secuencia Finobacci"); 
}

return 0;

}