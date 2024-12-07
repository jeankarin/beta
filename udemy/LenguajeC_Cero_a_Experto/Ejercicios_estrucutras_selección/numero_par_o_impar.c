#include <stdio.h>

/*
Decir si el numero introducido es par o impar
*/

int main(){

    // Variables
    int num;

    // Solicitamos la información al usuario
    printf("Indica un numero para saber si es par o impar: ");
    scanf("%d", &num);

    // Procesamos los datos y los mostramos por pantalla
    if ( num % 2 == 0){
        printf("El numero es par\n");
    }else{
        printf("El numero es impar\n");
    }

    return 0;
}