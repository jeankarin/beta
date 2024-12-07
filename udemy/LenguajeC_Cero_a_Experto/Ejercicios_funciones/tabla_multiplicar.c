#include <stdio.h>

/*
Hacer un programa que muestre una tabla de multiplicar hasta el 20
de un numero cualquiera por pantalla, el numero se pide en la funcion
principal. Usar procedimiento
*/

void tablaMultiplicar(int n){
    for (int i = 1; i <= 20; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main(){

    // Variables
    int num;

    // Solicitamos la información al usuario
    printf("Escriba un numero para saber su tabla de multiplicar hasta 20\nNumero: ");
    scanf("%d", &num);

    // Procesamos los datos y los mostramos por pantalla
    tablaMultiplicar(num);

    return 0;
}
