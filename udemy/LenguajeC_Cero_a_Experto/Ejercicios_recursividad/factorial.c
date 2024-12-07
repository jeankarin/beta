#include <stdio.h>

/*
Calcular el factorial del numero facilitado por el usuario
*/

int numFactorial(int n){
    
    int factorial;
    
    // Si el numero es menor que 2 devolvemos 1
    if (n < 2){
        return 1;
    }

    factorial = numFactorial(n - 1) * n;
    return factorial;
}

int main(){

    // Variables
    int num;

    // Solicitamos la información al usuario
    printf("Escribe el numero para saber su factorial: ");
    scanf("%d", &num);

    // Procesamos los datos y los mostramos por pantalla
    printf("\nEl factorial de %i! es %i\n", num, numFactorial(num));

    return 0;
}
