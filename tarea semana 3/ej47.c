//Naomi Lizano
//37. Generar todas las tablas de multiplicar del 1 al 10.
#include<stdio.h>

int main(){

  //se declaran variables
int i, a, r;

//ciclo for para determinar las tablas del 1 al 10
for(i=1;i<=10;i++){
    printf("La tabla del %d es:\n", i);
    //ciclo for para determinar numeros a multiplicar del 0 al 12
    for(a=0;a<=12;a++){
      //multiplicacion
      r=i*a;
      //mensaje que se muestra al usuario
      printf("%dx%d=%d\n", i, a, r);

    }
    }
return 0;
}