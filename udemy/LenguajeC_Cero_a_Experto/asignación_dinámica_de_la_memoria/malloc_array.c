#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Reservar memoria con malloc para un array de tipo doble, para 1000 numeros.
Comprobar si el puntero es válido (si el puntero devuelve NULL. Significa
que no hay suficiente memoria)
*/

#define NUMTOTAL 1000

int main(){

    // Variables
    double *p_puntero;

    // Reservamos la memoria
    p_puntero = (double *)malloc(NUMTOTAL * sizeof(double));

    
    // Comprovamos si hay espacio para la reserva
    // SI hay espacio almacenamos numeros aleaterios
    if (p_puntero == NULL)
    {
        printf("No hay suficiente memoria\n");
        return -1;
    }else{
        printf("Se ha realizado la reserva\n");
        srand(time(NULL));
        
        for (int i = 0; i < NUMTOTAL; i++)
        {
            //*(p_puntero + i) = (double)rand() / RAND_MAX;
            p_puntero[i] = 1 + rand() % ((NUMTOTAL + 1) -1 );
        }
    }

    // Mostramos los valores por pantalla    
    for (int i = 0; i < NUMTOTAL; i++)
        {
            printf("%0.2lf\n", p_puntero[i]);
        }
    
    // Liberamos la memoria
    free(p_puntero);

    return 0;
}
