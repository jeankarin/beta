#include <stdio.h>

/*
Escriba un programa en C que pida dos números enteros al usuario, y determine cuál es
mayor, el primero o el segundo. Modifíquelo para considerar también la posibilidad de
que sean iguales.
*/

int main(){

    // Variables
    int num1, num2;

    // Solicitamos los datos al usuario
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        printf("El número %d es mayor\n", num2);
    }

    if (num1 == num2) {
        printf("Los números son iguales\n", num1, num2);
    }

    if (num1 > num2) {
        printf("El número %d es mayor\n", num1);
    }

    // Test borrar
    // printf("Número1 %d, número2 %d\n", num1, num2);

    return 0;
}