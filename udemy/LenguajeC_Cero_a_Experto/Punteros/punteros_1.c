#include <stdio.h>

/*
Ejemplo de punteros
*/

int main(){

    // Variables
    int numero = 5;
    

    // Mostramos el valor de numero por pantalla
    printf("Valor de la variable numero\n");
    printf("Numero vale %d\n", numero);
    printf("La posicion de memoria es: %p\n\n", &numero);

    // Asignamos la posición de memoria de numero al puntero *pnumero
    int *pnumero = &numero;

    // Mostramos el valor del puntero
    printf("Valores del puntero\n");
    printf("La posicion de memoria es: %p\n", &*pnumero);
    printf("El valor del puntero es: %d\n\n", *pnumero);

    // Modificamos el valor del punter y mostramos los datos por pantalla
    printf("Escribe un valor numero en base 10 para el puntero: ");
    scanf("%d", &*pnumero);
    printf("El valor de numero ahora es %d\n", numero);
    printf("El valor del puntero ahora es: %d\n\n", *pnumero);

    return 0;
}
