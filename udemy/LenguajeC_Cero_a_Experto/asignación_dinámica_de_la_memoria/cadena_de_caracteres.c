#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

/*
Pedir al usuario una cadena de caracteres, reservar memoria con malloc().
Almacenarlo en la memoria dinámica, posteriormente utilizar free() para
liberar el espacio de memoria utilizado.
*/

int main(){

    // Variables
    char nombre[30], *p_nombre;
    int longitud = 0;

    // Solicitamos la información al usuario
    __fpurge(stdin); // Limpieza del búfer, solo en Linux.
    printf("Indica tu nombre: ");
    fgets(nombre,30,stdin);
    strtok(nombre,"\n");

    // Reservamos la memoria
    longitud = strlen(nombre);
    p_nombre = (char *)malloc(longitud * sizeof(char));
    strcpy(p_nombre, nombre);

    // Procesamos los datos y los mostramos por pantalla
    printf("Nombre: %s\n", p_nombre);

    // liberamos la memoria
    free(p_nombre);

    return 0;
}
