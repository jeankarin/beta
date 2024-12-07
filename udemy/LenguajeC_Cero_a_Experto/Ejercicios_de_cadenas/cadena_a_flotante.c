#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Pedir 2 cadenas de número flotante al usuario y multiplicar entre ellas
*/

int main(){

    // Variables
    char cadena1[50], cadena2[50];

    // Solicitamos la información al usuario
    printf("Ingrese un numero flotante: ");
    fgets(cadena1,50,stdin);
    strtok(cadena1,"\n");

    printf("Ingrese otro numero flotante: ");
    fgets(cadena2,50,stdin);
    strtok(cadena2,"\n");

    // Procesamos los datos y los mostramos por pantalla
    float num1 = atof(cadena1), num2 = atof(cadena2);
    float resultado = num1 * num2;

    printf("El resultado de la multiplicacion es: %.2f", resultado);

    return 0;
}
