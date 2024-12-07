#include <stdio.h>
#include <string.h>
#include <stdio_ext.h> //! Librería necesaria para usar el __fpurge

int main(){

    // Variables
    char nombre[30];
    int edad, num;

    // Solicitamos la información.
    printf("Cual es tu numero favorito: ");
    scanf("%d", &num);

    __fpurge(stdin); //! Limpiamos la cache de entrada
    printf("Escribe el nombre: ");
    fgets(nombre,30,stdin);
    strtok(nombre,"\n");

    __fpurge(stdin); //! Limpiamos la cache de entrada
    printf("Escribe la edad: ");
    scanf("%d", &edad);

    // Mostramos los datos por pantalla
    printf("\nEl nombre es %s tiene %d anyo/s y su numero favorito es %d\n", nombre, edad, num);

    return 0;
}