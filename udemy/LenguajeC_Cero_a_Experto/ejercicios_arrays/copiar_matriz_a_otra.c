#include <stdio.h>

/*
Hacer una matriz de tipo entera de 2 * 2, llenarla de números
y luego copiar todo su contenido hacia otra matriz
*/

int main(){

    // Variables
    int matriz1[2][2] = {{1,2},{2,1}}, matriz2[2][2];

    // Procesamos los datos y los mostramos por pantalla
    // Copiamos el contenido
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz2[i][j] = matriz1[i][j];
        }
    }

    // Mostramos por pantalla
    printf("Matriz 1:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    printf("Matriz 2:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
