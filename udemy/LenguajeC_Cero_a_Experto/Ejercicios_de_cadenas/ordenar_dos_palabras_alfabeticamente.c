#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

/*
Perdirle dos palabras al usuario y ordenarlos alfabeticamente
*/

int main(){

    // Variables
    char palabra1[20], palabra2[20];

    // Solicitamos la información al usuario
    __fpurge(stdin);
    printf("Escribe la primera palabra: ");
    fgets(palabra1,20,stdin);
    printf("Escribe la segunda palabra: ");
    fgets(palabra2,20,stdin);

    // Procesamos los datos y los mostramos por pantalla
    if (strcmp(palabra1,palabra2) > 0)
    {
        printf("%s, %s", palabra2,palabra1);
    }else{
        printf("%s, %s", palabra1,palabra2);
    }

    return 0;
}
