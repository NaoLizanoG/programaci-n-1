//Naomi Lizano
//38. Leer un número entero y mostrar en pantalla su tabla de multiplicar.
 
 #include<stdio.h>


 int main(){
int i, n, resultado;

printf("Ingrese el numero del que quiere saber su tabla de multiplicar");
scanf("%d", &n);
    for (i=0; i<=12; i++){
        resultado=i*n;
        printf("%dx%d=%d",n, i, resultado);
    }
    return 0;

 }
 