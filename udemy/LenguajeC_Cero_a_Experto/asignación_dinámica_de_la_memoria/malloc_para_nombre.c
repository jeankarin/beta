#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

/*
Utilizar malloc para reservar memoria para un nombre (string)
*/

int main(){

    // Variables
    char nombre[50], *p_nombre;

    // Solicitamos la información al usuario
    printf("Indica tu nombre: ");
    fgets(nombre,50,stdin);
    strtok(nombre,"\n");

    // Reservamos la memoria
    p_nombre = (char *)malloc(strlen(nombre) * sizeof(char));
    
    // Procesamos los datos y los mostramos por pantalla
    strcpy(p_nombre,nombre);
    printf("%s\n", p_nombre);

    // Liberamos la memoria
    free(p_nombre);

    return 0;
}
