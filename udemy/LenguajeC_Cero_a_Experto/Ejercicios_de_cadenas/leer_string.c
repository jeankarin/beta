#include <stdio.h>

/*
Leer un string con getchar() y contabilizar cuantas vocales tiene.
*/

int main(){

    // Variables
    int cadena, contadorVocales = 0;

    // Procesamos los datos y los mostramos por pantalla
    while ('\n' != (cadena = getchar()))
    {
        if (cadena == 'a' ||  cadena == 'e' || cadena == 'i' || cadena == 'o' || cadena == 'u')
        {
            contadorVocales++;
        }
        putchar(cadena);
    }
    printf("\n\n El numero de vocales es: %d", contadorVocales);

    return 0;
}
