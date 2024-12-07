#include <stdio.h>

/*
Método de la burbuja para ordenar un array
*/

int main(){

    // Variables
    int array[5] = {3, 2, 4, 1, 5}, aux;

    // Ordenamos el array
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++) // Tiene que ser uno menos que el de arriba
        {
            if (array[j] > array[j + 1])
            {
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }

    // Mostramos el array en modo Ascendente
    printf("Mostramos el array en modo descendente\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    
    // Mostramos el array en modo Descendente
    printf("\nMostramos el array en modo Descendente\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}