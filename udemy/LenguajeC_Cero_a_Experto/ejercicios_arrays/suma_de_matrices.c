#include <stdio.h>

/*
Sumar 2 matrices
*/

void sumarMatrices(int matriz1[2][2], int matriz2[2][2]){
    int sumaMatrices[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sumaMatrices[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", sumaMatrices[i][j]);
        }
        printf("\n");
    }
}

int main(){

    // Variables
    int matriz1[2][2] = {{1,2},{3,4}};
    int matriz2[2][2] = {{5,6},{7,8}};

    // Procesamos los datos y los mostramos por pantalla
    sumarMatrices(matriz1,matriz2);

    return 0;
}
