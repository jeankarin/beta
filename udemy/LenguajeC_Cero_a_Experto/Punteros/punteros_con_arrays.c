#include <stdio.h>

/*
Podemos recorrer los arrays sin saber su tamanyo gracias a los punteros.
*/

int main(){

    // Variables
    int array[5] = {1,2,3,4,5};
    int *punteroArray = &array[0];

    // Recorremos el array sin saber su tamanyo
    while (*punteroArray != NULL)
    {
        printf("%d\n", *punteroArray);
        punteroArray++;
    }

    return 0;
}
