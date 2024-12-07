#include <stdio.h>
#include <string.h>

/*
Copiar la cadena de caracteres "Hola Mundo" de un array a otro.
Luego cambiar la palabra "Mundo" por "y bienvenido al lenguaje C".
*/

int main(){

    // Variables
    char palabra1[] = "Hola Mundo", palabra2[50];

    // Procesamos los datos y los mostramos por pantalla
    strcpy(palabra2,palabra1);

    strcpy(palabra2 + 5, " y bienvenido al lenguaje C"); //Le indicamos que conserve los 5 primeros caracteres. "Hola "

    printf("%s\n", palabra2);

    return 0;
}
