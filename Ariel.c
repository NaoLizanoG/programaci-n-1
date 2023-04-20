#include <stdio.h>

int main(int argc, char const *argv[])
{
    int suma = 0, num, factorial = 1;
    printf("Escribir un numero: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
        suma = suma + factorial;
    }
    printf("La sumatoria de los factoriales del numero %d es igual a %d", num, suma / num);
    return 0;
}