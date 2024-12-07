#include <stdio.h>

/*
hacer un bucle do ... while para imprimir las letras
minusculas del alfabeto
*/

int main(){

    // Variables
    char letra='a';

    // Procesamos los datos y los mostramos por pantalla
    do {
        printf("%c.\n", letra);
        letra++;
    }while(letra <= 'z');

    return 0;
}
