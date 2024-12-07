#include <stdio.h>
#include <math.h>

/* Sacar la hipotenusa de un triangulo rectangulo
pidiendo al usuario el valor de los 2 catetos */

int main(){

    // Variables
    float cateto1, cateto2, hipotenusa;

    // Solicitamos la informacion al usuario
    printf("Escribe los valores de los catetos\n");
    scanf("%f %f", &cateto1, &cateto2);

    // Realizamos las operaciones
    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));

    // Mostramos la informacion por pantalla
    printf("El valor de la hipotenusa es: %.2f", hipotenusa);

    return 0;
}