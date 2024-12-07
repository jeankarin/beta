#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Hacer una matriz de tipo entera preguntandole al usuario el
numero de filas y columnas, rellenar la matriz y luego
mostrar por pantalla
*/

int main(){

    // Variables
    int filas, columnas;
    filas = columnas = 0;
    srand(time(NULL));

    // Solicitamos la información al usuario
    printf("De cuanto será el array(filas y columnas): ");
    scanf("%d %d", &filas, &columnas);
    fflush(stdin);

    int array1[filas][columnas];

    // Procesamos los datos y los mostramos por pantalla
    // Rellenamos el array con numeros aleatorios
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            array1[i][j] = rand() % + (1000 + 1);
        }
    }
    
    // Mostramos el array por pantalla
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%i ", array1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
