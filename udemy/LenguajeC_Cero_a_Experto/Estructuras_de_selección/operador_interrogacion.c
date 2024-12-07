#include <stdio.h>

/*
Expresión condicional Operador '?'
Sintaxis:
Condición ? Expresión 1: Expresión 2 
*/

int main(){

    // Variables
    int numero;

    // Solicitamos los datos al usuario
    puts("Escribe un numero\n");
    scanf("%i", &numero);

    // Realizamos las operacions
    (numero % 2==0) ? printf("El numero es par\n") : printf("Es impar\n");

    return 0;
}