#include <stdio.h>

/*
Escriba un programa que solicite al usuario tres números enteros de una cifra y muestre
el mensaje "acceso permitido" si los números introducidos son “1”, “2” y “3”
*/

int main(){

    // Variables
    int a, b, c;

    // Solicitamos los numeros al usuario
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &c);

    // Validamos el acceso
    if (a == 1 & b == 2 & c == 3){
        printf("acceso permitido\n");
    } else {
        printf("Vuelve a intentarlo\n");
    }

    return 0;
}