#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

/*
Pedir el nombre de 3 familiares al usuario (en Mayúsculas)
y posteriormente convertir los datos a minúsculas.
*/

struct familia
{
    char nombre[50];
}miFamilia[3];


int main(){

    // Variables

    // Solicitamos la información al usuario
    for (int i = 0; i < 3; i++)
    {
        __fpurge(stdin);
        printf("Introduce el nombre del familiar %i", i);
        fgets(miFamilia[i].nombre,50,stdin);
    }

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 0; i < 3; i++)
    {
        strlwr(miFamilia[i].nombre); // En linux no existe esta función.
        printf("%s", miFamilia[i].nombre);
    }

    return 0;
}
