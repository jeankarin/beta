#include <stdio.h>
#include <string.h>

/*
Utilizar la función strcmp() para comparar dos palabras
*/

int main(){

    // Variables
    char nombre[] = "Hola", apellido[] = "Hola";

    // Procesamos los datos y los mostramos por pantalla
    if (strcmp(nombre,apellido) == 0)
    {
        printf("Ambas palabras son iguales");
    }else{
        printf("Ambas palabras son diferentes");
    }
    

    return 0;
}
