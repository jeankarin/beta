#include <stdio.h>

/*
Sumar 2 matrices, pidiendo al usuario el numero de filas y columnas,
además, los elementos de cada matriz. Luego mostrar el resultado.
*/

// Definimos variables globales
int filas, columnas;

void mostrarMatriz(int matriz1[filas][columnas]){
    
    printf("\nMatriz facilitada por el usuario\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
}

void sumarMatrices(int matriz1[filas][columnas], int matriz2[filas][columnas]){
    int matriz3[filas][columnas];
    
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Mostramos por pantalla la suma
    printf("\nMatrices sumadas\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }
}

int main(){

    // Variables

    // Solicitamos la información al usuario
    printf("Indique las filas y columnas que tendra la matriz: ");
    scanf("%d %d", &filas, &columnas);

    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    
    printf("\nRellene la matriz1\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("posicion de la matriz [%i][%i]", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nRellene la matriz2\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("posicion de la matriz [%i][%i]", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Mostramos la información por pantalla
    mostrarMatriz(matriz1);
    mostrarMatriz(matriz2);
    sumarMatrices(matriz1,matriz2);
}
