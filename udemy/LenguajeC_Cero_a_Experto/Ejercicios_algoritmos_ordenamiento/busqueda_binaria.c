#include <stdio.h>

/*
Hacer un array de 10 numeros desordenados, luego ordenarlos
con el método burbuja, después perdir un dato a buscar y
utilizar la búsqueda binaria para determinar si existe o no.
*/

int main(){

    // Variables
    int array[10] = {6,4,8,1,2,10,3,5,7,9};
    int aux, dato, inf = 0, sup = 10, mitad;
    char band = 'F';

    // Solicitamos la información al usuario
    printf("Indique un numero a buscar: ");
    fflush(stdin);
    scanf("%d", &dato);

    // Procesamos los datos y los mostramos por pantalla
    // Ordenamos método burbuja
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (array[j] > array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }

    // Mostramos array ordenado
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", array[i]);
    }

    // Realizamos busqueda binaria
    while (inf <= sup)
    {
        mitad = (inf + sup) / 2;

        if (array[mitad] == dato){
            band = 'V';
            break;
        }

        if (array[mitad] > dato){
            sup = mitad;
            mitad = (inf + sup) / 2;
        }

        if (array[mitad] < dato){
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
    }
    
    // Mostramos por pantalla
    if (band == 'F'){
        printf("\nEl numero no se ha encontrado\n");
    }else if (band == 'V'){
        printf("\nEl numero existe en la posicion %i", mitad);
    }

    return 0;
}