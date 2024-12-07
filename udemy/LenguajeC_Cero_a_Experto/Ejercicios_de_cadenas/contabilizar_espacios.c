#include <stdio.h>
#include <string.h>

/*
Leer una cadena de caracteres con getchar() y contabilizar cuantos espacios ocupa.
//! NO ME FUNCIONA EN LINUX!!!
*/

int main(){

    // Variables
    int cadena, contadorEspacios = 0;

    // Procesamos los datos y los mostramos por pantalla
    while ('\n' != (cadena = getchar()))
    {
        if (cadena = ' ')
        {
            contadorEspacios++;
        }
    }
    
    printf("El texto tiene: %d espacios\n", contadorEspacios);

    return 0;
}
