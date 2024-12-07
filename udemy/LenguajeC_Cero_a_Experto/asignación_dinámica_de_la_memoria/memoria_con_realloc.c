#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Reservar memoria dinámica para una cadena de caracteres de 10 espacios,
luego utilizar para ampliar la memoria dinámica a 30 espacios.
*/

int main(){

    // Variables
    char *p_palabra;

    // Reservamos la memoria
    p_palabra = (char *)malloc(10 * sizeof(char));

    // Solicitamos la palabra al usuario
    printf("Escribe tu palabra, hasta 10 caracteres: ");
    fflush(stdin);
    fgets(p_palabra,10,stdin);
    strtok(p_palabra,"\n");

    // Mostramos la información por pantalla
    printf("Tu palabra es: %s\n", p_palabra);

    // Ampliamos la memoria
    p_palabra = (char *)realloc(p_palabra,30 *sizeof(char));
    printf("Escribe tu palabra, hasta 30 caracteres: ");
    fflush(stdin);
    fgets(p_palabra,30,stdin);

    // Mostramos el resultado por pantalla
    printf("Tu nueva palabra es: %s", p_palabra);

    // Liberamos la memoria
    free(p_palabra);

    return 0;
}