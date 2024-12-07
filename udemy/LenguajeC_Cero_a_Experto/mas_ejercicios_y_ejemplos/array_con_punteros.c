#include <stdio.h>
#include <stdlib.h>

/*
Función que devuelve un array con malloc
*/

int* funcionArray(int n){

    // Declaramos puntero
    int *p_puntero;

    // Reservamos la memoria según número facilitado
    p_puntero = (int *)malloc(n * sizeof(int));

    // Devolvemos puntero
    return (p_puntero);
}

int main(){

    // Declaramos las variables
    int *p_newpuntero, cantidad;

    // Solicitamos el tamanyo al usuario
    printf("Indica la cantidad del array: ");
    scanf("%d", &cantidad);

    // Llamamos a la función para crear el array
    p_newpuntero = funcionArray(cantidad);

    // Rellenamos el array con numeros facilitados por el usuario.
    for (int i = 0; i < cantidad; i++)
    {
        printf("Valor en la posicion [%d]: ", i);
        scanf("%d", &p_newpuntero[i]);
    }
    
    // Mostramos el resultado
    printf("\n\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("posicion del array [%d]: valor: %d\n", i, p_newpuntero[i]);
    }

    // Liberamos la memoria reservada
    free(p_newpuntero);
    
    return 0;
}