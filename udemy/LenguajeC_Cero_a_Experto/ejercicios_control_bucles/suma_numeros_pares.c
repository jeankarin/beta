#include <stdio.h>

/*
Suma de 20 numeros pares

También podemos hacer que el for itere solo los numeros pares.
for (i = 0; i <= 20; i+=2) --> Con esto va itereando de 2 en 2.
*/

int main(){

    // Variables
    int i,num=0;

    // Procesamos los datos y los mostramos por pantalla
    for (i = 1; i <= 20; i++)
    {
        if ( i % 2 == 0){
            num += i;
        }
    }

    printf("La suma de los 20 primeros numeros pares es: %i\n", num);

    return 0;
}
