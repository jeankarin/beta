#include <stdio.h>

/*
Dibujar un arbol de asteriscos
*
**
***
****
*****
******
*/

int main(){

    // Variables
    int num;

    // Solicitamos la información al usuario
    printf("Indique la fila del tamanyo del arbol: ");
    scanf("%i", &num);

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}
