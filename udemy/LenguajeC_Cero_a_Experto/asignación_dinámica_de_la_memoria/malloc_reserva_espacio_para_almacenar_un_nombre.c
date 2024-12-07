#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Utilizar malloc para reservar memoria para un nombre (String)
*/

int main(){

    // Variables
    char nombre[20], *p_nombre;
    int longitud;

    strcpy(nombre, "Juan A. Horrillo"); //? Juan A. Horrillo\0
    longitud = strlen(nombre);

    printf("%i\n", longitud);
    p_nombre = malloc((longitud+1) * sizeof(char)); // Longitud del string más \0

    strcpy(p_nombre, nombre);
    printf("Nombre: %s", p_nombre);

    free(p_nombre);
    
    return 0;
}