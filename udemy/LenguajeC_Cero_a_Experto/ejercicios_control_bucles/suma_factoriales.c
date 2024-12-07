#include <stdio.h>

/*
Suma de factoriales
*/

int main(){

    // Variables
    int factorial=1, suma=0, cantidadFactorial;

    // Solicitamos la información al usuario
    printf("Ingrese la cantidad de factoriales a sumar ");
    scanf("%d", &cantidadFactorial);

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 1; i <= cantidadFactorial; i++)
    {
        factorial *= i;
        suma += factorial;
    }

    printf("La suma de factoriales es: %d\n", suma);

    return 0;
}
