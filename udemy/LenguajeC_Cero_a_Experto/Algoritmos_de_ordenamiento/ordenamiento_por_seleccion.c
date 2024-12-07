#include <stdio.h>

/*
Ordenamiento por selección
*/

int main(){

    // Variables
    int array[5] = {3, 4, 1, 5, 2}, aux, minimo;

    // Ordenamos el array
    for (int i = 0; i < 5; i++)
    {
        minimo = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (array[j] < array[minimo])
            {
                minimo = j;
            }
        }
        aux = array[i];
        array[i] = array[minimo];
        array[minimo] = aux;
    }

    // Mostramos en orden ascendente y descendente
    printf("\nAscendente\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nDescendente\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}