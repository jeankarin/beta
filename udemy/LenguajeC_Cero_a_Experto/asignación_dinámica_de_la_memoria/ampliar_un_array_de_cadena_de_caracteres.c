#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Reservar memoria dinámica para una cadena de caracteres de 10 espacios, luego utilizar
realloc para ampliar la memoria dinámica a 30 espacios.
*/

int main(){

    // Variables
    char *p_caracteres;

    // Reservamos la memoria
    p_caracteres = (char *)malloc(10 * sizeof(char));
    strcpy(p_caracteres,"Juan A.");
    
    // Mostramos el valor del puntero
    printf("%s\n", p_caracteres);

    // Ampliamos la memoria
    p_caracteres = (char *)realloc(p_caracteres, 30 * sizeof(char));
    strcat(p_caracteres, " Es el mas guapo del mundo\n");

    // Mostramos el valor del puntero
    printf("%s", p_caracteres);

    // Liberamos la memoria
    free(p_caracteres);

    return 0;
}
