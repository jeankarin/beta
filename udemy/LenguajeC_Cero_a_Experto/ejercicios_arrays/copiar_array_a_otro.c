#include <stdio.h>

/*
Copiar el contenido de un array a otro
*/

void copiandoArrays(int array1[], int array2[], int tamanyo){
    // Copiamos array1 al array2
    for (int i = 0; i < tamanyo; i++)
    {
        array2[i] = array1[i];
    }

    // Mostramos el resultado por pantalla
    for (int i = 0; i < tamanyo; i++)
    {
        printf("%d", array2[i]);
    }
}

int main(){

    // Variables
    int array1[5] = {2,3,4,5,6};
    int array2[5];

    // Procesamos los datos y los mostramos por pantalla
    printf("Copiando array 1 al array 2\n");
    copiandoArrays(array1, array2, 5);

    return 0;
}
