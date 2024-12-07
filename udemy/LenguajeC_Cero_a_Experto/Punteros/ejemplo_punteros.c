#include <stdio.h>

/*

*/

int main(){

    // Variables
    int a = 19, b = 20; // Variables normales de tipo int.
    int *punteroA = &a, *punteroB = &b; // Punteros apuntando a las variables normales del tipo int.

    // Procesamos los datos y los mostramos por pantalla
    printf("Valor de las variables\n");
    printf("a = %i\n", a);
    printf("b = %i\n", b);
    printf("puntero en a = %i\n", *punteroA);
    printf("puntero en b = %i\n", *punteroB);

    // Modificamos el valor de a y b a través del puntero
    
    printf("\nCambiamos los valores de los punteros a punteroA = 49 y punteroB = 50\n");
    *punteroA = 49;
    *punteroB = 50;

    printf("Valor de las variables\n");
    printf("a = %i\n", a);
    printf("b = %i\n", b);
    printf("puntero en a = %i\n", *punteroA);
    printf("puntero en b = %i\n", *punteroB);

    return 0;
}
