#include <stdio.h>

/*

*/

int main(){

    // Variables
    char nombre[20];

    // Solicitamos la información al usuario
    printf("Escribe tu nombre: ");
    fgets(nombre,20,stdin);

    // Procesamos los datos y los mostramos por pantalla
    printf("Tu nombre es: %s\n", nombre);

    return 0;
}
