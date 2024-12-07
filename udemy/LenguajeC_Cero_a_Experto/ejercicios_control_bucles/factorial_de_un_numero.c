#include <stdio.h>

/*
Calcular el factorial de un numero dado por el usuario
*/

int main(){

    // Variables
    int num, factorial=1;

    // Solicitamos la información al usuario
    printf("Escribe un numero para hallar el factorial: ");
    scanf("%i", &num);

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 1; i <= num; i++){
        factorial *= i;
    }

    printf("El factorial de %i es %i\n", num, factorial);

    return 0;
}
