#include <stdio.h>

/*

*/

int main(){

    // Variables
    int array[10]; // Recuerda que los indices empiezan en cero [0] hasta n-1.
    // En este ejemplo --> 0-9

    
    // Solicitamos los números al usuario
    for (int i = 0; i < 10; i++)
    {
        printf("Escribe el valor para el indice %d: ", i);
        scanf("%d", &array[i]);
    }

    // Procesamos los datos y los mostramos por pantalla
    int indice = -1;
    while (++indice < 10) // Aquí hacemos el pre-incremento (Aquí lo que hacemos es que indice valga 0)
    {
        printf("%d, ", array[indice]);
    }

    printf("\n\n");

    return 0;
}
