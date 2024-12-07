#include <stdio.h>

/*
Utilizar las funciones getchar() y putchar() para leer e imprimir un string.

getchar() → Se utiliza para leer carácter a carácter. La llamada a getchar() devuelve 
el carácter siguiente del flujo de entrada, stdin. En caso de error o de encontrar el fin del archivo, devuelve EOF.

putchar() → Se utiliza para escribir en la salida (stdout), 
carácter a carácter que se escribe es el transmitido como argumento.
*/

int main(){

    // Variables
    int c;

    while (EOF != (c = getchar())) // Mientras "c" no haya llegado al final
    {
        putchar(c);
    }

    return 0;
}
