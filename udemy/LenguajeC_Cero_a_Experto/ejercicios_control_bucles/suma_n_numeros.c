#include <stdio.h>

/*
Suma de los n primeros numeros
*/

int main(){

    // Variables
    int num, i=0, suma=0;

    // Solicitamos la información al usuario
    printf("Introduce el numero para sumar: ");
    scanf("%d", &num);

    // Procesamos los datos y los mostramos por pantalla
    while (i <= num)
    {
        suma += i;
        i++;
    }

    printf("La suma de los %d primeros numeros es: %d\n", num, suma);

    return 0;
}
