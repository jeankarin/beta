#include <stdio.h>
#include "suma.h"

/*
Sumar dos numeros con una funcion definida en headers. (suma.h)
*/

int main(){

    // Variables
    int num1, num2, *p_num1, *p_num2, resultado;

    // Solicitamos información al usuario
    printf("Indique dos numeros para sumar\n");
    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    p_num1 = &num1;
    p_num2 = &num2;

    // Lamamos a la función sumar
    resultado = suma(p_num1,p_num2);
    printf("El resultado de sumar %d y %d es: %d", num1, num2, resultado);
}