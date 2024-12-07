#include <stdio.h>
#include <string.h>

/*
Arrays de estructuras
*/

struct persona
{
    char nombre[50];
    int edad;
}personas[5]; // --> Array de 5 posiciones.


int main(){

    // Variables
    char c; // Para limpieza del buffer.

    // Solicitamos la información al usuario
    for (int i = 0; i < 5; i++)
    {
        while ((c = getchar()) != 0xA); // Se queda esperando que se introduzca algo que no sea un espacio vacío
        printf("Escribe el nombre para la persona[%d]: ", i + 1);
        fgets(personas[i].nombre,50,stdin);
        printf("Escribe la edad para la persona[%d]: ", i + 1);
        scanf("%d", &personas[i].edad);
    }
    
    // Procesamos los datos y los mostramos por pantalla
    for (int i = 0; i < 5; i++)
    {
        printf("El nombre de personas[%i] es: ", i + 1);
        printf("%s", personas[i].nombre);
        printf("La edad de personas[%i] es: ", i + 1);
        printf("%d\n", personas[i].edad);
    }

    return 0;
}
