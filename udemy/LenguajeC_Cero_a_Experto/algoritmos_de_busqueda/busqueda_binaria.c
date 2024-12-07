#include <stdio.h>

/*
Busqueda binaria
Para que esta busqueda funcione el array tiene que estar ordenado.
*/

int main(){

    // Variables
    int array[5] = {1,2,3,4,5}, inf, sup, mitad, dato = 3;
    char band = 'F';

    // Realizamos la busqueda
    inf = 0;
    sup = 5;
    while (inf <= sup)
    {
        mitad = (inf + sup) / 2;

        if (array[mitad] == dato)
        {
            band = 'V';
            break;
        }
        if (array[mitad] > dato)
        {
            sup = mitad;
            mitad = (inf + sup) / 2;
        }
        if (array[mitad] < dato)
        {
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
    }
    
    if (band == 'F')
    {
        printf("El numero no existe\n");
    }else if (band == 'V')
    {
        printf("El numero existe, en la posicion: %d\n", mitad);
    }

    return 0;
}