#include <stdio.h>
#include <stdlib.h>

/*
Convertir una cadena a número flotante con la función atof()
*/

int main(){

    // Variables
    char *cadena = "123.45";
    float valor;

    // Procesamos los datos y los mostramos por pantalla
    valor = atof(cadena);

    printf("%.2f", valor);

    return 0;
}
