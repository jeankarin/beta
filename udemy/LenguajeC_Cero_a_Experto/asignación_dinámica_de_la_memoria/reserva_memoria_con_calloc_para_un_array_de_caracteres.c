#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Reserva memoria con calloc para una cadena de caracteres
*/

int main(){

    // Variables
    char *p_nombre;

    // Reservamos la memoria
    p_nombre = (char *)calloc(10, sizeof(char));
    strcpy(p_nombre,"Juan A.");

    // Procesamos los datos y los mostramos por pantalla
    printf("Nombre: %s\n", p_nombre);

    // Liberamos la memoria
    free(p_nombre);

    return 0;
}
