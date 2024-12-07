#include <stdio.h>
#include <string.h>

/*
Hacer 2 arrays de cadena de carácteres,
pedir el nombre de usuario y guardarlo
dentro de un array y luego copiar el
contenido de ese array a otro
*/

// Defininimos tamanyo de los arrays
#define tamanyo 15

int main(){

    // Variables
    char nombre1[tamanyo], nombre2[tamanyo];

    // Solicitamos la información al usuario
    printf("Escribe tu nombre en el array1: ");
    fgets(nombre1,tamanyo,stdin);

    // Procesamos los datos y los mostramos por pantalla
    strcpy(nombre2, nombre1);
    printf("Tu nombre en el array2 es: %s", nombre2);

    return 0;
}
