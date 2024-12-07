#include <stdio.h>

/*
Suma de matrices.
*/

void sumarMatrices(int m1[2][2], int m2[2][2]){
    int suma[2][2];
    int filas, columnas;

    for (filas = 0; filas < 2; filas++)
    {
        for (columnas = 0; columnas < 2; columnas++)
        {
            suma[filas][columnas] = m1[filas][columnas] + m2[filas][columnas];
        }
    }

    for (filas = 0; filas < 2; filas++)
    {
        for (columnas = 0; columnas < 2; columnas++)
        {
            printf("%i ", suma[filas][columnas]);
        }
        printf("\n");
    }
    
}

int main(){

    // Variables
    int matriz1[2][2] = {{1,2},{2,1}}, matriz2[2][2] = {{2,1},{1,2}};

    // Procesamos los datos y los mostramos por pantalla
    sumarMatrices(matriz1,matriz2);

    return 0;
}
