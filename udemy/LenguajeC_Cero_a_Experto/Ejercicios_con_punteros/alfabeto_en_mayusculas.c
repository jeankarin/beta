#include <stdio.h>

/*
Imprimir el alfabeto con mayusculas usando punteros.
*/

int main(){

    // Variables
    char letra;
    char *p_letra = &letra;

    // Mostramos la información por pantalla
    for (letra = 'A'; letra <= 'Z'; letra++)
    {
        printf("%c", *p_letra);
    }

    return 0;
}