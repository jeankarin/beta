#include <stdio.h>

/*
Escriba un programa en C que pida dos números enteros al usuario, y determine si el
primero es divisible entre el segundo.
*/

int main(){

    // Variables
    int num1,num2;
    int resto;

    // Solicitamos los números al usuario
    printf("Introduce el primer número: ");
    scanf("%d", &num1);

    printf("Introduce el segundo número: ");
    scanf("%d", &num2);

    // Comprobamos si el primero es divisible entre el segundo
    resto = num1 % num2;
    if (resto == 0) {
        printf("El número %d es divisible por el número %d\n", num1, num2);
    } else {
        printf("El número %d no es divisible por el número %d\n", num1, num2);
    }

    // Test BORRAR
    // printf("num1 %d, num2 %d y el resto es %d\n", num1, num2, resto);

    return 0;
}