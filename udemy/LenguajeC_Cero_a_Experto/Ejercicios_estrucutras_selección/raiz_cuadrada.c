#include <stdio.h>
#include <math.h>

/*
Ingrese un numero y calcule e imprima  su raiz cuadrada.
Si el numero es negativo, imprima el numero y un mensaje
indicando que su raiz es imaginaria.
*/

int main(){

    // Variables
    float numero, raiz;

    // Solicitamos la información al usuario
    printf("Escribe tu numero: ");
    scanf("%f", &numero);

    // Procesamos los datos y los mostramos por pantalla
    if ( numero >= 0 ){
        raiz = sqrt(numero);
        printf("Su raiz cuadrada es: %.2f\n", raiz);
    }else{
        printf("El numero tiene raiz imaginaria\n");
    }

    return 0;
}