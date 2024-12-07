#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

/*
Pedir 2 nombres al usuario y comprobar si son iguales o no
*/

int main(){

    // Variables
    char nombre1[50], nombre2[50];

    // Solicitamos la información al usuario
    printf("Indique el nombre 1: ");
    fgets(nombre1,50,stdin);
    strtok(nombre1,"\n");
    __fpurge(stdin);
    printf("Indique el nombre 2: ");
    fgets(nombre2,50,stdin);
    strtok(nombre2,"\n");

    // Procesamos los datos y los mostramos por pantalla
    if (strcmp(nombre1,nombre2) == 0)
    {
        printf("Los nombres son iguales");
    }else{
        printf("Los nombres son distintos");
    }
    

    return 0;
}
