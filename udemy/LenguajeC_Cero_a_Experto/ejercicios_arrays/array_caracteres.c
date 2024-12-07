#include <stdio.h>
#include <string.h>

/*
Hacer 2 arrays de cadena de caracteres, pedir el nombre al usuario
guardarlo dentro de un array y luego, copiar el contenido de ese array
a otro.
*/

int main(){

    // Variables
    char nombre1[20], nombre2[20];

    // Solicitamos la información al usuario
    printf("Escribe tu nombre en la variable nombre1: ");
    fgets(nombre1,50,stdin);
    fflush(stdin);
    strtok(nombre1,"\n");

    // Procesamos los datos y los mostramos por pantalla
    strcpy(nombre2, nombre1);
    printf("El nombre en la variable nombre1 es: %s\n", nombre1);
    printf("El nombre en la variable nombre2 es: %s\n", nombre2);

    return 0;
}
