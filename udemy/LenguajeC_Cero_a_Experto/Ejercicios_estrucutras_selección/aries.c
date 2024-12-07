#include <stdio.h>
#include <string.h>

/*
Ingresar por teclado el nombre y el signo zodiacal
de cualquier persona e imprima, solo el nombre si 
la persona es del signo Aries.
En caso contrario, imprima solo, no es aries
*/

int main(){

    // Variables
    char nombre[40], signo[40];

    // Solicitamos los datos
    printf("Escribe tu nombre\n");
    fgets(nombre, 40, stdin);
    strtok(nombre, "\n");

    printf("Escribe tu signo\n");
    fgets(signo, 40, stdin);
    strtok(signo, "\n");

    // Procesamos los datos
    if ((strcmp(signo, "aries") == 0) || (strcmp(signo, "Aries") == 0)){
        printf("Tu nombre es: %s\n", nombre);
    }else{
        printf("Tu signo no es aries\n");
    }

    return 0;
}