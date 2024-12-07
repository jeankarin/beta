#include <stdio.h>

/*
Utilizar las funciones getchar() y putchar() para leer e imprimir un string.

getchar() → Se utiliza para leer carácter a carácter. La llamada a getchar() devuelve el carácter 
            siguiente del flujo de entrada, stdin. En caso de error o de encontrar el fin del archivo, devuelve EOF.
putchar() → Se utiliza para escribir en la salida (stdout), carácter a carácter que se escribe es el transmitido como argumento.


En resumen, getchar lee carácter a carácter, del teclado por ejemplo y putchar lo muestra por pantalla, también, carácter a carácter.
*/

int main(){

    // Variables
    int cadena;

    // Procesamos los datos y los mostramos por pantalla
    while (EOF != (cadena = getchar())) // Ctrl+D para salir en Linux, Ctrl+Z para salir en Windows.
    {
        putchar(cadena);
    }

    return 0;
}
