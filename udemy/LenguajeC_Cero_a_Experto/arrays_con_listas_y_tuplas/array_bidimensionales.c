#include <stdio.h>

/*
Creación de arrays bidimensionales
*/

int main(){

    // Variables
    // int tabla[2][3] = {1, 2, 3, 4, 5, 6};
    int tabla[2][3] = {{1,2,3},{4,5,6}};

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 0; i < 2; i++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("Array posición %d, %d vale: %d\n", i, y, tabla[i][y]);
        }
        
    }
    

    return 0;
}
