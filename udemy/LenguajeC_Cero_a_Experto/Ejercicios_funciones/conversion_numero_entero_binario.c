#include <stdio.h>

/*
Conversión de entero a binario
*/

void funcBinario(int numero){
    if (numero > 1){
        funcBinario(numero / 2);
    }

    printf("%i", numero % 2);
}

int main(){

    // Variables
    int numero;

    // Solicitamos la información al usuario
    do
    {
        printf("Escribe un numero: ");
        scanf("%i", &numero);
    } while (numero < 0);
    
    // Procesamos los datos y los mostramos por pantalla
    funcBinario(numero);

    return 0;
}
