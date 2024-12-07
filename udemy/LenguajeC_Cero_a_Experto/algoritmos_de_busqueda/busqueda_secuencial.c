#include <stdio.h>

/*
busqueda secuencial

*/

int main(){
    int array[5] = {3, 2, 1, 4, 5}, dato = 3, i = 0;
    char band = 'F';

    // Buscamos el dato, en este caso el 3
    while ((band == 'F') && (i < 5))
    {
        if (array[i] == dato)
        {
            band = 'V';
        }
        i++;
    }

    // Mostramos el resultado por pantalla
    if (band == 'F')
    {
        printf("El numero no existe en el array\n");
    }else if (band == 'V')
    {
        printf("El numero existe, posicion: %d\n", i);
    }
    
    return 0;
}