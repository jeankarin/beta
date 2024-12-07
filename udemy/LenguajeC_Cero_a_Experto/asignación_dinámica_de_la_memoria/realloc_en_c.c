#include <stdio.h>
#include <stdlib.h>

/*
Uso de realloc

*puntero = realloc(puntero a bloque, tamaño total del nuevo bloque);
*/

int main(){

    // Variables
    int *vector, *vectorConvertido;

    // Reservamos la memoria para 3 numeros integer.
    vector = malloc(3 * sizeof(int));

    // Primer vector
    vector[0] = 1;
    vector[1] = 2;
    vector[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        printf("%i ", vector[i]);
    }

    // Ampliamos el array vector de 3 a 5 con realloc.
    vectorConvertido = realloc(vector,5 * sizeof(int));

    // Agregamos los demás valores
    vector[3] = 4;
    vector[4] = 5;
    printf("\n\n");

    // Mostramos por pantalla    
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", vectorConvertido[i]);
    }

    // Liberamos la memoria
    // free(vector);
    free(vectorConvertido);

    return 0;
}