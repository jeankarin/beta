#include <stdio.h>

/*
Hacer una variable de tipo int, float y char. Almacenar datos en cada una y
posteriormente indicar la posición de memoria de dónde se encuentran
guardados los datos de cada variable con apuntadores.
*/

int main(){

    // Variables
    int n = 10, *p_n = &n;
    float f = 2.0, *p_f = &f;
    char c = 'a', *p_c = &c;

    // Mostramos los datos por pantalla
    printf("Variable entera: \n");
    printf("Dato: %i\n", *p_n);
    printf("Posicion de memoria %p\n\n", p_n);

    printf("Variable flotante: \n");
    printf("Dato: %f\n", *p_f);
    printf("Posicion de memoria %p\n\n", p_f);

    printf("Variable caracter: \n");
    printf("Dato: %c\n", *p_c);
    printf("Posicion de memoria %p\n\n", p_c);

    return 0;
}