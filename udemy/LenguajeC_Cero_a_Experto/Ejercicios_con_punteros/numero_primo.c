#include <stdio.h>

/*
Determinar si un número es primo o no; con punteros y además
indicar en que posición de memoria se guardó el número
*/

int main(){

    // Variables
    int numero, *p_numero = &numero, contador = 0;

    // Solicitamos los datos al usuario
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    // Mostramos la información por pantalla
    for (int i = 1; i <= *p_numero; i++)
    {
        if (*p_numero % i == 0)
        {
            contador++;
        }
    }
    
    if (contador > 2)
    {
        printf("El numero %d no es primo\n", *p_numero);
        printf("Posicion en memoria: %p\n", p_numero);
    }
    else
    {
        printf("El numero %d es primo\n", *p_numero);
        printf("Posicion en memoria: %p\n", p_numero);
    }
    

    return 0;
}