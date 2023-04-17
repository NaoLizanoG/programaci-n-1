//Naomi Lizano
//37. Generar todas las tablas de multiplicar del 1 al 10.
#include<stdio.h>

int main(){
int i, a, r;

for(i=1;i<=10;i++){
    printf("La tabla del %d es:\n", i);
    for(a=0;a<=12;a++){
      r=i*a;
      printf("%dx%d=%d\n", i, a, r);

    }
    }
return 0;
}