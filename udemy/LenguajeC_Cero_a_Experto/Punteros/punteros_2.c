#include <stdio.h>

/*
Ejemplo de punteros 2.
*/

int main(){

    // Variables
    int numero = 50;
    int *pNumero;

    printf("Dato: %i\n", numero); // Dato
    printf("Posicion %p\n", &numero); // Posición en memoria

    pNumero = &numero; //&numero --> posición en memoria de número

    printf("Valor de la variable\n");
    printf("Dato: %i\n", numero);
    printf("Dato: %i\n", *pNumero);

    printf("Posicion de memoria:\n");
    printf("Posicion: %p\n", &numero);
    printf("Posicion: %p\n", &*pNumero); // También me funciona poniendo *pNumero en vez de &*pNumero

    return 0;
}
