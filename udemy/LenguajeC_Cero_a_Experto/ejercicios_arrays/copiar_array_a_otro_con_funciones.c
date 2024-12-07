#include <stdio.h>
#include <string.h>

/*
Copiar el contenido de un array1 de 5 elementos hacia
otro array2. Usando funciones.
*/

#define tamanyo 5

void copyArray(char array1[]){
    char array2[tamanyo];
    strcpy(array2,array1);
    printf("El valor del array2 es: %s\n", array2);
}

void copyArray2(char array1[]){
    char array2[tamanyo];
    for (int i = 0; i < tamanyo; i++)
    {
        array2[i] = array1[i];
    }

    printf("El valor del array2 es: %s\n", array2);
}

int main(){

    // Variables
    char array1[tamanyo];

    // Solicitamos la información al usuario
    printf("Escribe una palabra en el array1: ");
    fgets(array1,tamanyo,stdin);
    strtok(array1,"\n");

    // Procesamos los datos y los mostramos por pantalla
    copyArray2(array1);

    return 0;
}
