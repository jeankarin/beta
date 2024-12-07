#include <stdio.h>

/*
Recursividad con Fibonacci
*/

int funcFibo(int n){
    if (n == 0 || n == 1)
    {
        return n;
    }else{
        return (funcFibo(n-1) + funcFibo(n-2));
    }
}

int main(){

    // Variables
    int numero, i;

    // Solicitamos la información al usuario
    printf("Escribe le numero de elementos: ");
    scanf("%i", &numero);

    // Procesamos los datos y los mostramos por pantalla
    for (i = 1; i <= numero; i++)
    {
        printf("%i, ", funcFibo(i));
    }

    return 0;
}
