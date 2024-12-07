#include <stdio.h>

/*
Hacer una variable de tipo int, otra de tipo float y por último
una de tipo char, almacenar datos encada una de las variables,
posteriormente indicar la posición de memoria dónde se encuentran
guardados los datos de cada variable. Con punteros.
*/

int main(){

    // Variables
    int entero = 9, *p_entero = &entero;
    float flotante = 2.5, *p_flotante = &flotante;
    char caracter = 'a', *p_caracter = &caracter;

    // Procesamos los datos y los mostramos por pantalla
    printf("Entero: %d\n", entero);
    printf("Apuntador *: %d\n", *p_entero); //! Muestra el contenido de la memoria. (9)
    printf("Apuntador entero: %p\n", p_entero); //! Muestra la posición de la memoria.
    printf("Direccion de memoria de entero: %p\n\n", &entero);

    printf("Flotante: %f\n", flotante);
    printf("Apuntador *: %f\n", *p_flotante);
    printf("Apuntador Flotante: %p\n", p_flotante);
    printf("Direccion de memoria de flotante: %p\n\n", &flotante);

    printf("Caracter: %c\n", caracter);
    printf("Apuntador *: %c\n", *p_caracter);
    printf("Apuntador caracter: %p\n", p_caracter);
    printf("Direccion de memoria de caracter: %p\n\n", &caracter);

    return 0;
}