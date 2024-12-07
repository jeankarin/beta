#include <stdio.h>

/*
Sacar el promedio de 8 números facilitados por el usuario
*/

int main(){

    // Variables
    int array[8], total = 0;

    // Solicitamos la información al usuario
    for (int i = 0; i < 8; i++)
    {
        printf("\nDato %d: ", i+1);
        scanf("%d", &array[i]);
        total += array[i];
    }

    // Procesamos los datos y los mostramos por pantalla
    // Calculamos el promedio
    float promedio = total / 8;
    printf("\n\nEl promedio de los valores es: %.2f\n", promedio);

    return 0;
}
