#include <stdio.h>
#include <string.h>

/*
Pedir una cadena al usuario y luego invertirla.
Diciendo además cuantos caracteres tiene.
*/

int main(){

    // Variables
    char palabra[50];

    // Solicitamos la información al usuario
    printf("Introduce una palabra: ");
    fgets(palabra,50,stdin);
    strtok(palabra,"\n");

    // Procesamos los datos y los mostramos por pantalla
    strrev(palabra); //En linux no me funciona, vuelve la cadena del revés.

    printf("La palabra invertida es: %s\n", palabra);
    printf("La palabra tiene %d caracteres\n", strlen(palabra));

    return 0;
}
