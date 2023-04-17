//Naomi Lizano
//36. Mostrar en pantalla la tabla de multiplicar del número 5.

#include<stdio.h>

int main() {
    int i, a=0;
    printf("La tabla de multiplicar del 5 es:\n");
    
    for (i=0; i<=60; i=i+5){
        
        printf("5x%d=%d\n",a, i);
        a=a+1;
    }

    return 0;
}