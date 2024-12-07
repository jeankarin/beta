#include <stdio.h>

/*
Hacer una matriz de tipo entero preguntando al usuario el numero
de filas y columnas, rellenar la matriz y luego mostrarla en pantalla
*/

int main(){

    // Variables
    int filas, columnas;

    // Solicitamos la información al usuario
    printf("Escribe el numero de filas: ");
    scanf("%d", &filas);
    printf("Escribe el numero de columnas: ");
    scanf("%d", &columnas);

    // Declaramos el array
    int matriz[filas][columnas];

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Escribe el numero de la posicion [%i][%i]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
