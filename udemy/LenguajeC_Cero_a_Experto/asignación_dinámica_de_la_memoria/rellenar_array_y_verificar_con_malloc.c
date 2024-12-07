#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Pedir al usuario el número de elementos para un array de numeros enteros,
posteriormente comprobar con malloc si hay memoria suficiente (si el puntero
es válido, es decir diferente de NULL), si hay memoria, entonces rellenar ese
array con numeros aleatorios, si no la hay decir que hay un error en la
asignación de memoria.
*/

int main(){

    // Variables
    int cantidad, *p_numeros;

    // Solicitamos la información al usuario
    printf("Ingrese el numero de elementos del arreglo: ");
    scanf("%d", &cantidad);

    // Reservamos la memoria.
    p_numeros = (int *)malloc(cantidad * sizeof(int));

    // Comprobamos si se ha realizado la reserva de memoria
    if (p_numeros == NULL)
    {
        printf("No se ha podido realizar la reserva\n");
        return -1;
    }else{
        printf("Reserva realizada\n");
        srand(time(NULL));

        // Rellenamos el array
        for (size_t i = 0; i < cantidad; i++)
        {
            *(p_numeros + i) = rand() % 100;
            printf("%d) numero: %d\n", i, p_numeros[i]);
        } 
    }

    // Liberamos la memoria
    free(p_numeros);    

    return 0;
}