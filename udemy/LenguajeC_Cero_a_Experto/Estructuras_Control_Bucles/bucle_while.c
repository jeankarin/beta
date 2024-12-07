#include <stdio.h>

/*
Sintaxis del bucle while:
while (algo) {
    instrucciones
}
*/

int main(){

    // Variables
    int i = 0;

    // Procesamos los datos y los mostramos por pantalla
    while (i <= 100){
        printf("El valor de i es %i\n", i);
        i++;
    }

    return 0;
}