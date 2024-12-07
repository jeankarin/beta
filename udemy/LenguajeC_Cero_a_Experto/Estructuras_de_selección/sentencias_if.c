#include <stdio.h>

/* Sentencias IF
if (algo){
    accion
}
*/

int main(){
    
    // Variables
    int a,b,c;
    a=b=3;

    // Realizamos las operaciones
    c = a + b;

    // Sentencias
    if (a+b == 6){
        printf("El resultado es %i", c);
    }

    return 0;
}