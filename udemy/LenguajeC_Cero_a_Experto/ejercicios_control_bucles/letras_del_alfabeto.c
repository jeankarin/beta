#include <stdio.h>

/*
Letras del alfabeto
*/

int main(){

    // Variables
    char letra = 'a';

    // Procesamos los datos y los mostramos por pantalla
    do
    {
        printf("lectra %c\n", letra);
        letra++;
    } while (letra <= 'z');
    

    return 0;
}
