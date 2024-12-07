#include <stdio.h>
#include <stdlib.h>

/*
Uso de Free para liberar la memoria reservada con malloc
*/

int main(){

    // Variables
    int *p1;

    // Reservamos la memoria
    p1 = malloc(sizeof(int)); // reserve 4 bites de memoria por ser integer

    // Comprobamos si la memoria está llena
    if (p1 == NULL)
    {
        printf("Memoria llena\n");
    }else{
        printf("Hay espacio\n");
        *p1 = 15;
        printf("\n\n%i", *p1);
    }

    // Liberamos la memoria
    free(p1);
    
    // Comprobamos que está vacía
    printf("\n\n%i", *p1);

    return 0;
}