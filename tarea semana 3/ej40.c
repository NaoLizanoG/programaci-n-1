//Naomi Lizano 
//40. Leer un número de dos dígitos y determinar si pertenece a la serie de Fibonacci.
#include<stdio.h>

int num(int n1){
 int nf2=1, nf1=0, contador, resultado, nf;
 resultado =0;
  
    for(contador=3; contador<=22;contador++){
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

int n, r;
printf("Esta programacion permite evaluar si un numero pertenece a la secuencia de Finobacci hasta el numero 10 000 \n");
printf("Escriba el numero que desea evaluar \n");
scanf("%d", &n);

r=num(n);

if (r==1||n==0){
    printf("El numero si pertenece a la secuencia Finobacci");
}
else {
   printf("El numero no pertenece a la secuencia Finobacci"); 
}

return 0;

}