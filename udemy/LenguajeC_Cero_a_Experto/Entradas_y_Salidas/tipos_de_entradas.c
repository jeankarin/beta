#include <stdio.h>

int main(){
    int q;
    float w;
    char e;

    // Valor entero
    printf("Introduce un número entero \n");
    scanf("%i",&q);
    printf("El valor del entero es %i\n", q);

    // Valor float
    printf("Introduce un número flotante \n");
    scanf("%f",&w);
    printf("El valor del número flotante es %f\n", w); // Si ponemos %.3f limitamos los decimales a 3.

    // Valor carácter
    printf("Introduce un carácter \n");
    scanf("%c",&e);
    printf("El valor del carácter es %c\n", e);
}
