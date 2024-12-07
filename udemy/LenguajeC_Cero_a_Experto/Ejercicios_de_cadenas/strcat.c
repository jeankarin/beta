#include <stdio.h>
#include <string.h>

/*
Utilizar la función strcat() para añadir un texto a un string
*/

int main(){

    // Variables
    char nombre[100] = "Hola a todos "; // Si pongo [] sin numero me da error por el tamaño

    // Procesamos los datos y los mostramos por pantalla
    strcat(nombre, "mi nombre es Juan");

    printf("%s", nombre);

    return 0;
}