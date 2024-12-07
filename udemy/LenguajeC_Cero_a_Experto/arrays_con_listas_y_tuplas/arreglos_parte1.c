#include <stdio.h>

/*
Declarar un array con 3 indices y valores asignados
*/

int main(){

    // Variables
    int array[3] = {24, 05, 96};

    // Procesamos los datos y los mostramos por pantalla
    printf("Primer valor %d\n", array[0]);
    printf("Primer valor %d\n", array[1]);
    printf("Primer valor %d\n", array[2]);

    // También se puede manipular el valor a nuestro gusto.
    array[0] = 54;
    printf("El nuevo valor del indice 0 es: %d", array[0]);

    return 0;
}
