#include <stdio.h>
#include <string.h>

/*
Sintaxis:
strlen(cadena)
Devuelve un entero que representa la longitud de una cadena de texto. Incluyendo los espacios en blanco, pero excluyendo el carácter null.
*/

int main(){

    // Variables
    char array[200];

    // Solicitamos la información al usuario
    printf("Escribe cualquier cosa\n");
    scanf("%s", &array);

    // Procesamos los datos y los mostramos por pantalla
    printf("\nLa longitud de la cadena digitada es %i\n", strlen(array));

    return 0;
}
