#include <stdio.h>
#include <stdlib.h> // Necesario para atoi()

/*
Convertir una cadena a enteros con atoi()
*/

int main(){

    // Variables
    char *cad = "20";
    int valor;

    // Procesamos los datos y los mostramos por pantalla
    valor = atoi(cad);
    printf("Numero entero: %i\n", valor);

    valor += 5;
    printf("Numero entero: %i\n", valor);

    return 0;
}
