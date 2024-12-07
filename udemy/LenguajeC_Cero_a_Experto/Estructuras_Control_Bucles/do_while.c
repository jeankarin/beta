#include <stdio.h>

/*
Bucle Do-While
Sintaxis:
do {
    instrucciones
}while(condicion)
*/

int main(){

    // Variables
    int i = 0;

    // Procesamos los datos y los mostramos por pantalla
    do
    {
        printf("El valor de i es %i\n", i);
        i++;
    } while (i <= 20);
    
    return 0;
}