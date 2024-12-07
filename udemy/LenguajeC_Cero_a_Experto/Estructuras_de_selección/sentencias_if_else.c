#include <stdio.h>

/*
if (algo){
    accion1
}else{
    accion2
}
*/

int main(){

    // Variables
    float a,b,c;

    // Solicitamos datos al usuario
    printf("Escribe un numero\n");
    scanf("%f", &a);
    printf("Escribe un numero\n");
    scanf("%f", &b);

    // Realizamos la operacion
    c = a + b;

    // Sentencia IF ... ELSE ...
    if (c > 200){
        printf("El resultado es mayor a 200 y vale %.2f \n", c);
    }else{
        printf("El resultado es menor a 200 y vale %.2f \n", c);
    }

    return 0;
}