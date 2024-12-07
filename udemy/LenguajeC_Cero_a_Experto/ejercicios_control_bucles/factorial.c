#include <stdio.h>

/*
Determinar el factorial de un numero
1*2*3*4*5*6*7*8*9*10 = 10!
*/

int main(){

    // Variables
    int i, num, factorial=1;

    // Solicitamos la información al usuario
    printf("Escribe el numero para saber el Factorial: ");
    scanf("%i", &num);

    // Procesamos los datos y los mostramos por pantalla
    for (i = 1; i <= num; i++){
        factorial *= i;
    }

    printf("El factorial de %i\n", factorial);

    return 0;
}
