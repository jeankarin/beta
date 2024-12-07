#include <stdio.h>

/*
Media aritmética de 2 numeros
*/

float mediaAritmetica(float num1, float num2){
    return (num1 + num2) / 2;
}

int main(){

    // Variables
    float num1, num2;

    // Solicitamos la información al usuario
    printf("Calcular la media aritmetica de 2 numeros: ");
    scanf("%f %f", &num1, &num2);

    // Procesamos los datos y los mostramos por pantalla
    printf("La media aritmetica es: %.2f\n", mediaAritmetica(num1, num2));

    return 0;
}
