#include <stdio.h>

// Aumentar el salario un 10%

int main(){

    // Declaramos las variables.
    char nombre[40];
    int salario;
    float aumentoSalario;

    // Solicitamos el nombre al usuario
    printf("Inserte su nombre por favor\n");
    gets(nombre);

    printf("Su nombre es %s\n", nombre);
    printf("Inserte su salario\n");
    scanf("%i", &salario);

    aumentoSalario = (salario * .1) + salario; // .1 es el aumento del 10%
    printf("Felicidades %s tu salario ahora es %.2f\n", nombre, aumentoSalario);

}
