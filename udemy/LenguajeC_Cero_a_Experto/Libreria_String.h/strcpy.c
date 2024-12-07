#include <stdio.h>
#include <string.h>

/*
Sintaxis:
strcpy(destino, fuente)
Permite copiar una cadena de texto en otra. Tienes que tener en cuenta que la dimensión del array 
debe ser igual o mayor que el array origen y que además sobrescribe el contenido del destino.
*/

int main(){

    // Variables
    char Origen[]="Programación";
    char Destino[12];

    // Procesamos los datos y los mostramos por pantalla
    strcpy(Destino,Origen);

    printf("%s\n", Destino);

    return 0;
}
