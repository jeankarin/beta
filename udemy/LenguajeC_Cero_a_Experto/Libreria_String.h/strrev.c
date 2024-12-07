#include <stdio.h>
#include <string.h>

/*
Sintaxis:
strrev(cadena)
Invierte una cadena.
*/

int main(){

    // Variables
    char cadena[] = "Hola";

    // Solicitamos la información al usuario
    strrev(cadena);

    // Procesamos los datos y los mostramos por pantalla
    printf("Cadena invertida: %s", cadena);

    return 0;
}
