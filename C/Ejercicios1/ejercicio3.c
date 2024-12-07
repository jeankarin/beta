#include <stdio.h>

/* Escriba un programa en C que pida un número al usuario e indique si es par o impar.
En caso de que sea par indicar si es o no múltiplo de 3. 
*/

int main(){

    // Variables
    int num, resto;

    // Solicitamos el número al usuario
    printf("Introduce un número: ");
    scanf("%d", &num);

    // Comprobamos si es par o impar
    resto = num % 2;
    if (resto == 0) {
        printf("El número %d es par\n", num);

        if (num % 3 == 0){
            printf("El número %d es múltiplo de 3\n", num);
        } else {
            printf("El número %d no es múltiplo de 3\n", num);
        }
    } else if (resto == 1) {
        printf("El número %d es impar\n", num);
    }

    // Test BORRAR
    printf("Número introducido: %d\n", num);

    return 0;
}