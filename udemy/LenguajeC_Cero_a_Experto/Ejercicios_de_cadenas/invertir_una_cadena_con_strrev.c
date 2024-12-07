#include <stdio.h>
#include <string.h>

/*
Invertir una cadena de carácteres con strrev()
*/

int main(){

    // Variables
    char palabra[] = "Hola Mundo";

    // Procesamos los datos y los mostramos por pantalla
    printf("Palabra original: %s\n", palabra);
    strrev(palabra); // En Windows no se, pero en Linux no existe está función.
    printf("Palabra invertida: %s", palabra);

    return 0;
}
