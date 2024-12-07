#include <stdio.h>

/*
Comprobar si un numero introducido por el usuario
es positivo o negativo.
*/

int main(){

    // Variables
    int numero;

    // Solicitamos la información al usuario
    printf("Indique un numero: ");
    scanf("%d", &numero);

    // Procesamos los datos y los mostramos por pantalla
    if (numero >= 0){
        printf("El numero es positivo");
    }else{
        printf("El numero es negativo");
    }

    return 0;
}