#include <stdio.h>

/*
Dado un vector de 10 elementos {1,2,3,4,4,7,8,9,5,4},
Hacer un programa que muestre las direcciones de memoria
de cada elemento
*/

int main(){

    // Variables
    int vector[] = {1,2,3,4,4,7,8,9,5,4}, *p_vector = vector;

    // Mostramos los datos por pantalla
    for (int i = 0; i < 10; i++)
    {
        printf("Dato vector[%d]: %d\n", i, *p_vector);
        printf("Posicion en memoria: %p\n", p_vector);
        p_vector++;
    }

    return 0;
}