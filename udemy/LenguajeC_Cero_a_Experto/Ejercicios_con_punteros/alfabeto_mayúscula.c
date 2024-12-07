#include <stdio.h>

/*
Imprimir el alfabeto en mayúsculas con Punteros.
Si al puntero no le pones el * te muestra la posición de memoria como la variable
&caracter.
*/

int main(){

    // Variables
    char caracter;
    char *pcaracter;
    pcaracter = &caracter;

    // Procesamos los datos y los mostramos por pantalla
    for (caracter = 'A'; caracter <= 'Z'; caracter++)
    {
        printf("%c", *pcaracter);
    }
    printf("\n");

    for (caracter = 'a'; caracter <= 'z'; caracter++)
    {
        printf("%c", *pcaracter);
    }
    printf("\n");

    return 0;
}
