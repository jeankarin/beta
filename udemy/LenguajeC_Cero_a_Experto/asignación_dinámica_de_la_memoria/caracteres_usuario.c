#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
#include <stdlib.h>

/*
Pedir una cadena de caracteres al usuario, posteriormente utilizar malloc()
para reservar memoria para esa cadena de caracteres (string)
*/

int main(){

    // Variables
    char palabra[30], *p_palabra;

    // Solicitamos la información al usuario
    printf("Digita tu palabra: ");
    __fpurge(stdin);
    fgets(palabra,30,stdin);
    strtok(palabra,"\n");

    // Reservamos la memoria
    p_palabra = (char *)malloc(strlen(palabra) * sizeof(char));

    // Procesamos los datos y los mostramos por pantalla
    strcpy(p_palabra,palabra);
    printf("%s\n", p_palabra);

    // Liberamos la memoria
    free(p_palabra);

    return 0;
}
