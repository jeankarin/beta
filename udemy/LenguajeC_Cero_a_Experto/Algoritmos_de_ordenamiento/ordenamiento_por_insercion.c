#include <stdio.h>

/*
Ordenamiento por inserción
Compara con el valor que tiene a su izquierda
*/

int main(){

    // Variables
    int array[5] = {3, 1, 4, 2, 5}, aux, pos;

    // Ordenamos el array
    for (int i = 0; i < 5; i++)
    {
        pos = i;
        aux = array[i];
        while((pos > 0) && (aux < array[pos - 1]))
        {
            array[pos] = array[pos - 1];
            pos--;
        }
        array[pos] = aux;
    }

    // Mostramos el resultado por pantalla
    printf("Ascendente\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\nDescendente\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}