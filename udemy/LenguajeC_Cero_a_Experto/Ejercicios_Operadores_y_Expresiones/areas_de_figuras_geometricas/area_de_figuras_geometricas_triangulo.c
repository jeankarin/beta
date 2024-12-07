#include <stdio.h>

int main(){

    // Declaramos las variables
    float base,altura,area;

    // solicitamos los datos al usuario
    printf("Este programa calcula el area de un triangulo\nInserta la base y la altura\n");
    scanf("%f %f", &base, &altura);

    // Calculamos el area del triangulo y lo mostramos por pantalla
    area = (base * altura)/2;
    printf("El area del triangulo es %.2f\n", area);

    return 0;
}
