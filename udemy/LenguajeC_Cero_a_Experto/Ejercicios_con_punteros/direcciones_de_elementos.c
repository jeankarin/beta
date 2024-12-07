#include <stdio.h>

/*
Dado de un vector de 10 elementos = {1,2,3,4,4,7,8,9,5,4},
escribe un programa en C (haciendo uso de puntero) que muestre las 
direcciones de memoria de cada elemento del vector
*/

int main (){

    // Variables
    int vector[] = {1,2,3,4,4,7,8,9,5,4};
    int *p_vector = vector;

    // Mostramos información por pantalla
    for (int i = 0; i < 10; i++)
    {
        printf("Dato vector[%d] = %d\n", i, vector[i]);
        printf("Direccion de memoria de vector[%d] = %p\n", i, p_vector);
        p_vector++; //? Le indicamos que cambie de la posición 0 a la posición 1 del Vector.
    }
    
    return 0;
}