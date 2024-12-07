#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
#include <stdlib.h> // Para el uso de atoi()

/*
Pedir 2 cadenas numericas al usuario.
Luego convertirlas a numeros enteros. 
Sumar el valor y entregar el resultado.
*/

int main(){

    // Variables
    char num1[20], num2[20];
    int valor1, valor2, resultado;

    // Solicitamos la información al usuario
    __fpurge(stdin);
    printf("Ingrese la primera cadena numerica: ");
    fgets(num1,20,stdin);
    strtok(num1,"\n");

    // Solicitamos la información al usuario
    __fpurge(stdin);
    printf("Ingrese la primera cadena numerica: ");
    fgets(num2,20,stdin);
    strtok(num2,"\n");

    // Procesamos los datos y los mostramos por pantalla
    valor1 = atoi(num1);
    valor2 = atoi(num2);

    resultado = valor1 + valor2;

    printf("El valor de %s + %s es: %d\n", num1, num2, resultado);

    return 0;
}
