#include <stdio.h>

/*
Se hace un paso por valor, se crea una copia de la variable (structura) que pasamos a la función area.
Por lo que no se modificar la variable principal (r). 
*/

// Declaramos la estructura
struct rectangulo
{
    int base;
    int altura;
};

// Declaramos la función para calcular el area
int area(struct rectangulo r1)
{
    return r1.base * r1.altura;
}

int main(){

    // Declaramos las variables
    struct rectangulo r={10,5};

    // Llamamos a la función y mostramos el resultado de la operación
    printf("El area del rectangulo es: %d", area(r));
}