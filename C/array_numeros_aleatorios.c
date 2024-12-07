#include <stdio.h>
#include <time.h>
// Este error: warning: implicit declaration of function ‘srand’ [-Wimplicit-function-declaration]
// Se soluciona añadiendo esta librería.
#include <stdlib.h>

void rellenarMatriz(int mat1[4]){
    int num = 0;
    srand(time(NULL));

    for (int i = 0; i < 4; i++)
    {
        num = 1 + rand() % 10;  // Número aleatorio entre 1 y 10
        mat1[i] = num;          // Asigna el número aleatorio directamente
    }   
}

int main(){

    // Variables
    int matriz[4] = {0,0};

    rellenarMatriz(matriz);

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", matriz[i]);
    }

    return 0;
}