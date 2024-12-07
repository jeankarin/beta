#include <stdio.h>
#include <stdlib.h>

struct Rectangulo
{
    int base;
    int altura;
};

int main(){

    // Variables
    struct Rectangulo *p_puntero;

    // Reservamos memoria
    p_puntero = (struct Rectangulo *)malloc(sizeof(struct Rectangulo));

    // Asignamos los datos y mostramos por pantalla
    p_puntero->altura = 10;
    p_puntero->base = 5;
    printf("base: %d, altura: %d\n", p_puntero->altura, p_puntero->base);

    // Liberamos la memoria
    free(p_puntero);

    return 0;
}