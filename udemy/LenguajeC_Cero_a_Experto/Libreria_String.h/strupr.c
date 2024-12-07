#include <stdio.h>
#include <string.h>

/*
Sintaxis:
strupr(cadena)
Está función convierte a mayúsculas las letras de una cadena.
*/

int main(){

    // Variables
    char texto;

    // Solicitamos la información al usuario
    printf("Escribe un texto con mayusculas y minusculas\n");
    fflush(stdin);
    scanf("%s", &texto);

    // Procesamos los datos y los mostramos por pantalla
    printf("El nuevo texto es el siguiente:\n");
    printf("%s\n", strupr(texto));

    return 0;
}
