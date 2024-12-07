#include <stdio.h>
#include <math.h>

int main(){

    // Declaramos las variables
    float lado,area;

    // solicitamos los datos al usuario
    printf("Este programa calcula el area de un cuadrado\nInserta el valor del lado\n");
    scanf("%f", &lado);

    // Calculamos el area del cuadrado y lo mostramos por pantalla
    area = pow(lado,2); // con pow le estamos indicado que está elevado a la potencia que indicamos, en este caso 2.
    printf("El area del cuadrado es %.2f\n", area);

    /* Si al compilar da error con "pow" <undefined reference to `pow`>
    lo hemos de compilar a mano de la siguiente manera
    gcc fichero.c -o fichero -lm
    Y ya funciona
    */

    return 0;
}
