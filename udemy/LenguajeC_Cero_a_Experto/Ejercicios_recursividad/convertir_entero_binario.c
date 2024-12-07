#include <stdio.h>

/*
Pasar un numero entero a binario con recursividad
*/

void numBinario(int n){
    
    if (n > 1){
        numBinario(n / 2);
    }

    printf("%d", n % 2);
}

int main(){

    // Variables
    int num;

    // Solicitamos la información al usuario
    printf("Escribe un numero: ");
    scanf("%d", &num);

    // Procesamos los datos y los mostramos por pantalla
    numBinario(num);

    return 0;
}
