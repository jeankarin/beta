#include <stdio.h>

/*
Calcular el menor de 2 numeros
*/

int main(){

    // Variables
    float num1, num2;

    // Solicitamos los numeros al usuario
    printf("Digita 2 numeros\n");
    scanf("%f %f", &num1, &num2);

    // Realizamos las operaciones
    if ( num1 < num2 ){
        printf("El numero %.2f es el menor\n", num1);
    }else{
        printf("El numero %.2f es el menor\n", num2);
    }

    return 0;
}