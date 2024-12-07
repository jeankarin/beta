#include <stdio.h>

/*
Rellenar un array de 10 numeros, posteriormente utilizando
punteros indicar cuáles son numeros pares y su posición en memoria.
*/

int main(){

    // Variables
    int numeros[10], *p_numeros = numeros;

    // Solicitamos información al usuario
    for (int i = 0; i < 10; i++)
    {
        printf("Introduce el numero en la posicion [%d]: ", i);
        scanf("%d", &numeros[i]);
    }
    
    // Mostramos la información por pantalla
    for (int i = 0; i < 10; i++)
    {
        if (*p_numeros % 2 == 0)
        {
            printf("El numero %d es par\n", *p_numeros);
            printf("Su posicion en memoria es: %p\n", p_numeros);
        }
        p_numeros++;
    }

    return 0;
}