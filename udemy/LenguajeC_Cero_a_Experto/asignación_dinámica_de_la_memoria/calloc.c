#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

/*
Reserva memoria con calloc para una cadena de caracteres
*/

int main(){

    // Variables
    char *p_palabra, palabra[50];
    int longitud;

    // Solicitamos la información al usuario
    printf("Digita una palabra: ");
    __fpurge(stdin);
    fgets(palabra,50,stdin);
    strtok(palabra,"\n");

    // Reservamos la memoria
    printf("Tamanyo de la palabra: %ld\n", strlen(palabra));
    // Si no borramos el signo "\0" del final de palabra, como hacemos con strtok, hemos de poner strlen(palabra) + 1.
    p_palabra = (char *)calloc(strlen(palabra), sizeof(char));

    // Procesamos los datos y los mostramos por pantalla
    strcpy(p_palabra,palabra);
    printf("%s\n", p_palabra);

    // Liberamos la memoria
    free(p_palabra);

    return 0;
}
