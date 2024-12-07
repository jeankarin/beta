#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Reservar espacio en memoria con malloc para un array de tipo double para 1000 numeros.
Y comprobar si el puntero es válido. (Si el puntero devuelve NULL, significa que no hay
memoria suficiente)
*/

#define TOPE 1000

int main(){

    // Variables
    double *p_array;
    p_array = (double *)malloc(TOPE * sizeof(double)); // Reservamos la memoria

    // Comrobamos si se ha podido reservar, si es así lo rellenamos con numeros aleatorios.
    if (p_array == NULL)
    {
        printf("Error en la asignacion de memoria\n");
        return -1;
    }else{
        srand(time(NULL));
        for (int i = 0; i < TOPE; i++)
        {
            p_array[i] = 1 + rand() % ((TOPE + 1) -1);
            printf("%.2lf.\n", p_array[i]);
        }
    }

    // Limpiamos la memoria
    free(p_array);

    return 0;
}
