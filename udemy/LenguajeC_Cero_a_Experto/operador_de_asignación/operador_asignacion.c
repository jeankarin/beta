
#include <stdio.h>

int main(){

    int a,b,c; // Declaramos 3 variables de tipo int.
    a=b=c=10; // Asignamos el valor 10 a todas las variables.

    printf("El valor de las variables a, b, c es: %i %i %i\n", a,b,c); // Mostramos el valor por pantalla

    // vamos a sumar 3 a la variable a
    a += 3;

    // Mostramos el valor por pantalla
    printf("El valor de a ahora es: %i\n", a);

    /* También se puede hacer con la resta, la multiplicación y la división
    a -= 3; --> Restamos 3 a la variable a.
    a *= 2; --> Multiplicamos 2 a la variable a.
    a /= 2; --> Dividimos entre 2 el valor de a.
    */
}
