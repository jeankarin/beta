#include <stdio.h>

/*
Crear una función que sume dos numeros facilitados por el usuario
y los devuelva.
*/

// Declaramos la función que sumará los números.
int Sumar(int n1, int n2){
    int suma=0;

    suma = n1 + n2;

    return suma;
}

int main(){

    // Variables
    int num1, num2, resultado=0;

    // Solicitamos la información al usuario
    printf("Escribe dos numeros para sumarlos: ");
    scanf("%d %d", &num1, &num2);

    // Procesamos los datos y los mostramos por pantalla
    resultado = Sumar(num1,num2);
    printf("El resultado de sumar %d y %d es: %d", num1,num2,resultado);

    return 0;
}
