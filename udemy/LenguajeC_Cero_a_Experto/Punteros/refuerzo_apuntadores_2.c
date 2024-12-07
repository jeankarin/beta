#include <stdio.h>

int main(){

    // Variables
    int arr1[4][5][2], var;
    int *point;

    // Procesamos los datos y los mostramos por pantalla
    point = &arr1[0][0][0];
    var = 1;

    for (int l = 0; l < 4; l++)
    {
        for (int m = 0; m < 5; m++)
        {
            for (int n = 0; n < 2; n++)
            {
                arr1[l][m][n] = var;
                var += 2;
            }
        }
    }
    
    int a = *(point + 4);
    int b = *(point + 16);
    int c = *(point + 23);

    printf("El valor de a es de %d\n", a);
    printf("El valor de b es de %d\n", b);
    printf("El valor de c es de %d\n", c);

    // indica cuales son los indices del arreglo que se almacenan en las variables a, b y c.

    for (int l = 0; l < 4; l++)
    {
        for (int m = 0; m < 5; m++)
        {
            for (int n = 0; n < 2; n++)
            {
                printf("[%d]", arr1[l][m][n]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    /*
    Utilizando el apuntador y un solo ciclo, recorre el arreglo de tal manera que se modifiquen todos
    sus valores de la siguiente manera: plano 0, valores múltiplos de 4 (4,8,12,16); plano 1: valores
    múltiplos de 6 (6,12,18,...), plano 2, valores múltiplos de 7 (7,14,21,28...) plano 3, valores
    múltiplos de 5 (5,10,15,20,...)
    */
    
    printf("\n\nModificamos el array y lo imprimimos por pantalla\n");

    point = &arr1[0][0][0];
    for (int cont = 0; cont < 40; cont++)
    {
        if (cont < 10)
        {
            *(point + cont) = 4 * (cont +1);
        }
        if (cont >= 10 && cont < 20)
        {
            *(point + cont) = 6 * (cont -9);
        }
        if (cont >= 20 && cont < 30)
        {
            *(point + cont) = 7 * (cont -19);
        }
        if (cont >= 30 && cont < 40)
        {
            *(point + cont) = 5 * (cont -29);
        }
    }

    // Mostramos el resultado por pantalla
    for (int l = 0; l < 4; l++)
    {
        for (int m = 0; m < 5; m++)
        {
            for (int n = 0; n < 2; n++)
            {
                printf("[%d]", arr1[l][m][n]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
