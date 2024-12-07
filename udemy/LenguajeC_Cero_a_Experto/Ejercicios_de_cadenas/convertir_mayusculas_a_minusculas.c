#include <stdio.h>
#include <string.h>

/*
Pasar palabra a minusculas
*/

int main(){

    // Variables
    char palabra1[] = "Hola Mundo";

    // Procesamos los datos y los mostramos por pantalla
    strlwr(palabra1); // En Windows no se, pero en Linux no funciona.

    printf("%s", palabra1);

    return 0;
}
