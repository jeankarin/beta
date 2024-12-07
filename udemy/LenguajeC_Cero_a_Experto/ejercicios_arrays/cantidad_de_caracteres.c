#include <stdio.h>
#include <string.h>

/*
Realice un programa que permita leer una cadena de caracteres y
que devuelva el numero de caracteres que tiene dicha cadena e 
imprima dicha cadena al revés.
*/

int main(){

    // Variables
    char palabra[50];
    int i = 0;

    // Solicitamos la información al usuario
    printf("Escribe una palabra: ");
    fgets(palabra,50,stdin);
    strtok(palabra,"\n");

    // Procesamos los datos y los mostramos por pantalla
    // Contamos las palabras
    while (palabra[i] != '\0')
    {
        i++;
    }

    printf("La palabra tiene %d caracteres\n", i);
    printf("La palabra al reves es: ");

    // Mostramos la palabra al revés
    while (i >= 0)
    {
        printf("%c", palabra[i--]);
    }
    
    return 0;
}
