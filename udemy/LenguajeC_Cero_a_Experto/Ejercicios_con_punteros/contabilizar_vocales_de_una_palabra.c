#include <stdio.h>

/*
Leer un string y contabilizar cuantas vocales tiene.
NO FUNCIONA en linux el Ctrl+z
*/

int main(){

    // Variables
    int c, cont = 0;

    // Solicitamos la información al usuario
    printf("Digite su nombre y luego ctrl +z: ");

    // Procesamos los datos y los mostramos por pantalla
    while (EOF != (c=getchar()))
    {
        switch (c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': cont++;
        }
    }

    printf("El numero de vocales es: %i", cont);

    return 0;
}
