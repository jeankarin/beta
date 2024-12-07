#include <stdio.h>
#include <stdlib.h>

/*

*/

int main() {

    // Variables
    int *p_num;
    // int x;

    p_num = malloc(sizeof(int)); // Reserva 4 bites.
    // sizeof(int); // tamaño de una variable entera

    // x = sizeof(int);
    // printf("%i", x); // Saber cuantos bites reserva para los enteros tu computadora.
    *p_num = 5;

    printf("%i", *p_num);

    free(p_num);

    return 0;
}