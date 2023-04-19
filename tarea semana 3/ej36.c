//Naomi Lizano
//36. Mostrar en pantalla la tabla de multiplicar del número 5.

#include<stdio.h>

int main() {
    //variables
    int i, a=0;
    printf("La tabla de multiplicar del 5 es:\n");
    
    //ciclo for para los resultados de la mutiplicacion por cinco
    for (i=0; i<=60; i=i+5){
        
        //mensaje que el usuario ve
        printf("5x%d=%d\n",a, i);
        //a es los numeros a multiplicar por cinco para obtener los resultados de la tabla
        a=a+1;
    }

    return 0;
}
