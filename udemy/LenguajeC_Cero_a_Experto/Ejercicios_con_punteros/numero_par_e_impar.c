#include <stdio.h>

/*
Comprobar si un número es par o impar y señalar la
posición de memoria dónde se está guardando el número.
Con punteros.
*/

int main(){

    // Variables
    int numero, *p_numero;

    // Solicitamos los datos al usuario
    printf("Introduce un numero: ");
    scanf("%d", &numero);
    p_numero = &numero;

    // Mostramos los datos por pantalla
    if (*p_numero % 2 == 0)
    {
        printf("El numero %d es par\n", *p_numero);
        printf("La direccion de memoria donde se guarda es %p\n", p_numero);
    }
    else
    {
        printf("El numero %d es impar\n", *p_numero);
        printf("La direccion de memoria donde se guarda es %p\n", p_numero);
    }

    return 0;
}