#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

/*
Reservar espacio en memoria dinámica para un nombre y luego
liberar la memoria utilizada con free.
*/

int main(){

    // Variables
    char nombre[30], *p_nombre;
    int longitud;

    // Solicitamos la información al usuario
    __fpurge(stdin);
    printf("Indica tu nombre: ");
    fgets(nombre,30,stdin);
    strtok(nombre,"\n");

    // Reservamos la memoria
    longitud = strlen(nombre);
    p_nombre = (char *)malloc((longitud + 1) * sizeof(char));
    strcpy(p_nombre,nombre);

    // Procesamos los datos y los mostramos por pantalla
    printf("Nombre: %s\n", p_nombre);

    // Liberamos la memoria
    free(p_nombre);

    return 0;
}
