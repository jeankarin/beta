#include <stdio.h>

/*
Determinar si un número es par usando solo funciones
*/

// Creamos la función para saber si un numero es par
void funcionPar(int n){
    if (n % 2 == 0){
        printf("El numero %d es par\n", n);
    }else{
        printf("El numero %d no es par\n", n);
    }
}

int main(){

    // Variables
    int n;

    // Solicitamos la información al usuario
    printf("Escribe un numero: ");
    scanf("%i", &n);

    // Llamamos a la función
    funcionPar(n);

    return 0;
}
