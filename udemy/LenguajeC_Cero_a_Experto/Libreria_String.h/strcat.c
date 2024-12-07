#include <stdio.h>
#include <string.h>

/*
Sintaxis:
strcat(Destino, Fuente)
Concatena (agrega) la cadena fuente en el destino. Debes considerar que la cadena destino 
debe tener un tamaño tal que pueda albergar la cadena resultante.
*/

int main(){

    // Variables
    char Cadena1[] = "Juan", Cadena2[]="Horrillo";
    char Final[50];

    // Procesamos los datos y los mostramos por pantalla
    strcat(Final,Cadena1);
    strcat(Final,"-");
    strcat(Final,Cadena2);

    printf("%s\n", Final);

    return 0;
}
