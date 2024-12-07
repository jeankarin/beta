#include <stdio.h>

/*
Determinar si un numero es par o impar con funciones.
*/

void comprobarNumero(int n){
    if (n % 2 == 0)
    {
        printf("El numero %d es par\n", n);
    }else{
        printf("El numero %d es impar\n", n);
    }
}

int main(){

    // Variables
    int numero;

    // Solicitamos la información al usuario
    printf("Introduce un numero para saber si es par o impar: ");
    scanf("%d", &numero);

    // Procesamos los datos y los mostramos por pantalla
    comprobarNumero(numero);

    return 0;
}
