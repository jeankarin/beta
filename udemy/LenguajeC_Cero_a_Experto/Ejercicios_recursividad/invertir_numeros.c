#include <stdio.h>

/*
Invertir un numero entero con recursividad
*/

void numInvertir(int n){
    
    printf("%d", n % 10);
    
    if (n > 10){
        numInvertir(n / 10);
    }
}

int main(){

    // Variables
    int numero;

    // Solicitamos la información al usuario
    do
    {
        printf("Escribe un numero: ");
        scanf("%d", &numero);
    } while (numero < 0);

    // Procesamos los datos y los mostramos por pantalla
    numInvertir(numero);

    return 0;
}
