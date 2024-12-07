#include <stdio.h>
#include <stdlib.h>

int main(){

    // Variables
    int *dinamico = (int *)malloc(4 * sizeof(int));

    *dinamico = 10; // Posición 0
    *(dinamico + 1) = 20; // Posición 1
    dinamico[2] = 30; // Posición 2
    printf("%d\n", *(dinamico + 2));
    *(dinamico + 2) = 20; // Posición 2
    printf("%d\n", *(dinamico + 2));
    *(dinamico + 3) = 40; // Posición 3

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", *(dinamico + i));
    }
    
    printf("\n\n");

    int *dino = (int *)realloc(dinamico,sizeof(int) * 10);
    
    // Llenamos los espacios asignados por realloc
    for (int i = 0; i < 10; i++)
    {
        *(dino + i) = (i + 1) * 10;
        printf("%d ", *(dino + i));
        printf("%p\n", (dino + i));
    }

    free(dino);

    return 0;
}