#include <stdio.h>
#include <stdlib.h>

/*
Hacer un programa que borre la pantalla al pulsar 1.
*/

int main(){

    // Variables
    int numero;

    // Solicitamos información al usuario
    printf("Programa que borra la pantalla al pulsar el numero 1\n");
    printf("----------------------------------------------------\n");
    printf("escribe el numero 1\n");
    scanf("%i", &numero);

    // Procesamos los datos
    if ( numero == 1 ){
        system("clear");
        printf("Ha borrado la pantalla\n");
    }else{
        printf("El numero ingresado no es 1");
    }

    return 0;
}