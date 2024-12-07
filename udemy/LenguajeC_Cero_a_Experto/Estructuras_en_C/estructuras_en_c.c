#include <stdio.h>

/*
Estructuras en C
Es una colección de elementos que funcionan como una variable.
*/

// Declaramos una structura
struct personas
{
    char nombre[30];
    int edad;
};

int main(){

    // Definimos las variables
    struct personas alumno;
    
    // Solicitamos la información al usuario
    printf("Escribe tu nombre: ");
    fgets(alumno.nombre,30,stdin);
    printf("Escribe tu edad: ");
    scanf("%d", &alumno.edad);

    // Procesamos los datos y los mostramos por pantalla
    printf("Hola alumno %s\n", alumno.nombre);
    printf("Ya tienes %i año/s de edad\n", alumno.edad);

    return 0;
}