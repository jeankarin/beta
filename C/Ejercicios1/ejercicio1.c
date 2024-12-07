#include <stdio.h>
/* Escriba un programa que lea un número entero y escriba un mensaje si 
el número es mayor que 100 */

int main(){

    // Variables
    int num;

    // Solicitamos el número al usuario
    printf("Introduce un número: ");
    scanf("%d", &num);

    // Comprobamos si el número introducido es menor, igual o superior a 100
    if(num < 100) {
        printf("El número %d es menor a 100\n", num);
    }
    else if (num == 100) {
        printf("El número %d es igual a 100\n", num);
    }
    else if (num > 100) {
        printf("El número %d es mayor a 100\n", num);
    }

    return 0;
}