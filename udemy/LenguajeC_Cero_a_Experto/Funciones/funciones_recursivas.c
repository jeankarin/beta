#include <stdio.h>

/*
Función recursiva, se vuelve a llamar a si misma
*/

long factorial(int n){
    if ( n<= 1)
    {
        return 1;
    }else{
        return (n*factorial(n-1));
    }
}

int main(){

    // Variables
    int n;

    // Solicitamos la información al usuario
    printf("Escribe un numero: ");
    scanf("%i", &n);

    // Procesamos los datos y los mostramos por pantalla
    printf("El factorial del numero %li\n", factorial(n));

    return 0;
}
