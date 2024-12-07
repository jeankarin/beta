#include <stdio.h>
#include <string.h>

/*
Sintaxis:
strlwr(cadena)
Convierte a minúsculas todas las letras de una cadena de texto.
*/

int main(){

    // Variables
    char texto;

    // Solicitamos la información al usuario
    printf("Escribe un texto con mayusculas y minusculas\n");
    fflush(stdin);
    scanf("%s", &texto);

    // Procesamos los datos y los mostramos por pantalla
    printf("El nuevo texto es el siguiente\n");
    printf("%s\n", strlwr(texto));

    return 0;
}
