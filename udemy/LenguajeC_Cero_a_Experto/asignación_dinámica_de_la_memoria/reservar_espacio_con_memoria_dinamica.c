#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Reservar espacio en memoria dinámica para un nombre.
Y luego liberar la memoria con free()
*/

int main(){

    // Variables
    char *p_nombre;

    // Reservamos la memoria
    p_nombre = (char *)malloc(30 * sizeof(char));

    // Comprobamos si se ha reservado la memoria
    if (p_nombre == NULL)
    {
        printf("No se ha podido realizar la reserva\n");
        return -1;
    }else{
        printf("Indique un nombre de 30 caracteres max: ");
        fflush(stdin);
        fgets(p_nombre,30,stdin);
        strtok(p_nombre,"\n");
    }

    // Mostramos el nombre por pantalla
    printf("El nombre digitado es: %s\n", p_nombre);

    // Liberamos la memoria
    free(p_nombre);

    return 0;
}