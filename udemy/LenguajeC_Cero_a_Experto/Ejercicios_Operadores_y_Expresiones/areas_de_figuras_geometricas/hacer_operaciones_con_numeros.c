#include <stdio.h>

/* Pedir 2 numeros al usuario, sumarlo, restarlos, multiplicarlos
y dividirlos */

int main(){

    // Variables
    float num1, num2, suma, resta, multi, division;

    // Solicitamos los numeros al usuario
    printf("Escribe dos numeros\n");
    scanf("%f %f", &num1, &num2);

    // Realizamos las operaciones
    suma = num1 + num2;
    resta = num1 - num2;
    multi = num1 * num2;
    division = num1 / num2;

    // Mostramos el resultado por pantalla
    printf("La suma es: %.2f\n", suma);
    printf("La resta es: %.2f\n", resta);
    printf("La multi es: %.2f\n", multi);
    printf("La division es: %.2f\n", division);

    return 0;
}