#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crear una estructura usando typedef llamada persona y crear una instancia de ella
llamada cliente que contenga: edad, dinero y nombre.
Cambiar esos datos usando las diferentes sintaxis de los apuntadores a estrucutras
*/

typedef struct persona
{
    char nombre[30];
    float dinero;
    int edad;
}cliente;

int main(){

    // Variables
    cliente juan, *p_juan = &juan;

    // Reservamos memoria
    p_juan = (cliente *)malloc(sizeof(cliente));

    // Asignamos los datos y mostramos por pantalla
    p_juan->dinero = 2000.5;
    (*p_juan).edad = 40;
    fflush(stdin);
    printf("Indica tu nombre: ");
    fgets(p_juan->nombre,30,stdin);
    strtok(p_juan->nombre,"\n");
    printf("Nombre: %s, Edad: %d, Dinero: %.2f\n", p_juan->nombre, p_juan->edad, p_juan->dinero);

    // Liberamos la memoria
    free(p_juan);

    return 0;
}