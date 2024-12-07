#include <stdio.h>
#include <string.h>

/*
Crear una estructura para almacenar el nombre y la edad de personas.
Y que los datos los facilite el usuario.
*/

struct persona
{
    char nombre[30];
    int edad;
}persona1;


int main(){

    // Solicitamos la información al usuario
    fflush(stdin);
    printf("Escribe tu nombre: ");
    fgets(persona1.nombre,30,stdin);
    strtok(persona1.nombre,"\n");

    fflush(stdin);
    printf("Escribe tu edad: ");
    scanf("%d", &persona1.edad);
    
    // Procesamos los datos y los mostramos por pantalla
    printf("Hola %s ya tienes %d anyos\n", persona1.nombre, persona1.edad);

    return 0;
}
