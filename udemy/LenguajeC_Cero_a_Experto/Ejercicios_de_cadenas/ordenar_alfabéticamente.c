#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

/*
Pedir dos palabras al usuario y ordenar alfabéticamente
*/

int main(){

    // Variables
    char palabra1[50], palabra2[50];

    // Solicitamos la información al usuario
    __fpurge(stdin);
    printf("Ingrese palabra 1: ");
    fgets(palabra1,50,stdin);
    strtok(palabra1,"\n");

    __fpurge(stdin);
    printf("Ingrese palabra 2: ");
    fgets(palabra2,50,stdin);
    strtok(palabra2,"\n");

    // Procesamos los datos y los mostramos por pantalla
    if (strcmp(palabra1, palabra2) < 0)
    /* 
    Si la primera palabra es menor que la segunda (strcmp devuelve -1)
    Si las palabras son identicas (strcmp devuelve 0)
    Si la primera palabra es mayor que la segunda (strcmp devuelve 1)
    */
    {
        printf("%s %s", palabra1, palabra2);
    }else{
        printf("%s %s", palabra2, palabra1);
    }
    

    return 0;
}
