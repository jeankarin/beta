#include <stdio.h>
#include <stdlib.h>

/*
Reservar memoria para un arreglo de 5 numeros, rellenarlo con numeros que digite el usuario,
luego utilizar realloc para ampliar ese arreglo a 10 numeros y agregar 5 numeros más.
Por último imprimir el arreglo resultante de 10 numeros.
*/

int main(){

    // Variables
    int *p_array, *p_array_resultante;

    // Reservamos la memoria
    p_array = (int *)malloc(5 * sizeof(int));

    // Solicitamos al usuario los 5 primeros numeros
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un numero en la posicion [%d]: ", i);
        scanf("%d", &p_array[i]);
    }
    
    // Ampliamos la memoria a 5 numeros más.
    p_array_resultante = (int *)realloc(p_array, 10 * sizeof(int));

    // Solicitamos los otros 5 numeros al usuario
    for (int i = 5; i < 10; i++)
    {
        printf("Ingrese un numero en la posicion [%d]: ", i);
        scanf("%d", &p_array_resultante[i]);
    }
    
    // Imprimimos todo el arreglo
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", p_array_resultante[i]);
    }
    
    // Liberamos la memoria
    free(p_array_resultante);

    return 0;
}