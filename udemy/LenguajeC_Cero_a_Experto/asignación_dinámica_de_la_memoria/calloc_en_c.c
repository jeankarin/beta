#include <stdio.h>
#include <stdlib.h>

/*
Reserva de memoria con calloc

punter = calloc(numero de elementos, tamaño de cada elemento);
*puntero = calloc(5, sizeof(int));
*/

int main(){

    // Variables
    int *p1;

    // Reservamos la memoria con calloc
    p1 = calloc(5, sizeof(int)); // Reservamos 20 bites para 5 numeros enteros.

    for (int i = 0; i < 5; i++)
    {
        printf("Escribe un numero: ");
        scanf("%d", &p1[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d, ", p1[i]);
    }    

    free(p1);

    return 0;
}