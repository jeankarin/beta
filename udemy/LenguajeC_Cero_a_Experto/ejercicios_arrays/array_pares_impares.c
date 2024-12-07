#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Crea un programa que tenga un array de 100 números aleatorios
entre 1 y 1000. Una vez creado organizarlo de tal manera que almacene
los numeros pares en un array y los impares en otro.
*/

#define CANTIDAD 100

int main(){

    // Variables
    int aleatorios[CANTIDAD], pares[CANTIDAD], impares[CANTIDAD];
    srand(time(NULL));

    // Rellenamos con los números aleatorios
    for (int i = 0; i < CANTIDAD; i++)
    {
        aleatorios[i] = rand()% + (1000 + 1);
    }

    // Procesamos los datos y los mostramos por pantalla
    printf("Pares: \n");
    for (int i = 0; i < CANTIDAD; i++)
    {
        if (aleatorios[i] % 2 == 0){
            pares[i] = aleatorios[i];
            printf("%d ", pares[i]);
        }
    }
    
    printf("\nImpares: \n");
    for (int i = 0; i < CANTIDAD; i++)
    {
        if (aleatorios[i] % 2 != 0){
            impares[i] = aleatorios[i];
            printf("%d ", impares[i]);
        }
    }

    return 0;
}
