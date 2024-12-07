#include <stdio.h>

/*
Lectura de cadena de caracteres
*/

int main(){

    // Variables
    char nombre[20];

    // Solicitamos la información al usuario
    printf("Escribe tu nombre: ");
    scanf("%s", nombre);

    // Procesamos los datos y los mostramos por pantalla
    printf("Tu nombre es: %s\n", nombre);

    return 0;
}
