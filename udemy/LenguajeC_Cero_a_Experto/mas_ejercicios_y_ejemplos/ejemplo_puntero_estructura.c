#include <stdio.h>

// Estructura
struct Rectangulo
{
    int base;
    int altura;
};

// Función principal
int main(){

    // Variables
    struct Rectangulo r={10,5};

    // Creamos puntero
    struct Rectangulo *p=&r;

    // Cambiamos el valor de base
    r.base = 15;
    printf("Base: %d\n", r.base);

    // Cambiamos el valor de base a través del puntero
    (*p).base = 20;
    printf("Base: %d\n", r.base);

    // Cambiamos el valor de base a través del puntero, forma 2
    p->base = 40;
    printf("Base: %d\n",r.base);

    return 0;
}