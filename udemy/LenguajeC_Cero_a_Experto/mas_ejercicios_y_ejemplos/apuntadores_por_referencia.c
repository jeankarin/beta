#include <stdio.h>

/*
Si hacemos un paso por referencia de un valor a una función no lo modificará.
Solo lo modificará si le pasamos la posición de memoria y la función recibe un puntero.
*/

void funcionPuntero(int *p_puntero){

    *p_puntero = 3;
}

int main(){

    // Variables
    int a = 10;

    printf("a vale: %d, antes de pasar por la funcion\n", a);

    // Pasamos la posición de memoria de la variable a, a la función
    funcionPuntero(&a);

    printf("a vale: %d, después de pasar por la funcion\n", a);

    return 0;
}