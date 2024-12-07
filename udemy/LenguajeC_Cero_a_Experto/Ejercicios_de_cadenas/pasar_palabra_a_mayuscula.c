#include <stdio.h>
#include <string.h>

/*
Convertir de minusculas a mayusculas
*/

int main(){

    // Variables
    char palabra1[] = "Hola Mundo";

    // Procesamos los datos y los mostramos por pantalla
    strupr(palabra1); // En windows no se, pero en linux no funciona.

    printf("%s", palabra1);

    return 0;
}
