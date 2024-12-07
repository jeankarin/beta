#include <stdio.h>

/*
Esta función recibe un array y lo llena
Al pasar un array a una función, no se indica el numero de indices que recibira,
esto se hace con otra variable. Por defecto el array se hace con paso de parámetros
por referencia. Esto nos permite editarlo desde otra función.
*/

void rellenarArray(int array[], int dimensiones){
    for (int i = 0; i < dimensiones; i++)
    {
        printf("Dame el valor %d del array: ", i);
        scanf("%d", &array[i]);
    }
    
}

int main(){

    // Variables
    int miVector[5];

    // Solicitamos la información al usuario
    rellenarArray(miVector, 5);

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 0; i < 5; i++)
    {
        printf("El valor en la posicion %d es: %d\n", i, miVector[i]);
    }
    

    return 0;
}
