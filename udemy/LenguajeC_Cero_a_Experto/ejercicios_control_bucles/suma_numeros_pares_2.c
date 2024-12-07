#include <stdio.h>

/*
Hacer un programa que imprima la suma de todos los numeros
pares que hay desde 1 hasta n y diga cuantos numeros hay.
*/

int main(){

    // Variables
    int num, contador=0, suma=0;

    // Solicitamos la información al usuario
    printf("Indica un numero: ");
    scanf("%d", &num);

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            suma += i;
            contador++;
        }
    }

    printf("La suma de los numeros pares es: %d\n", suma);
    printf("La cantidad de numeros pares es: %d\n", contador);

    return 0;
}
