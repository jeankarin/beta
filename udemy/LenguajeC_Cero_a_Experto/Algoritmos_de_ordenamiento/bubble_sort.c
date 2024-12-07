#include <stdio.h>

/*
Algoritmo de ordenamiento: bubble sort
*/

int main(){

    // Variables
    int array[10] = {8,3,6,1,2,7,9,4,5,10}, aux;

    // Mostramos antes de ordenar
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    // Ordenamos el array
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (array[i] < array[j]) // Orden descendente >, orden ascendente <
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }   
    }
    
    // Mostramos el array ordenador
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}