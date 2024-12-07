#include <stdio.h>
#include <string.h>

/*
Pedir al usuario que digite una palabra, mostrar la palabra invertida y
comprobar si es cap-i-cua.
*/

int main(){

    // Variables
    char palabra1[50], palabra2[50];

    // Solicitamos la información al usuario
    printf("Escribe una palabra, max 50 caracteres: ");
    fgets(palabra1,50,stdin);
    strtok(palabra1,"\n");

    // Procesamos los datos y los mostramos por pantalla
    strcpy(palabra2,palabra1);
    strrev(palabra2); // NO me funciona en Linux
    
    printf("Palabra: %s", palabra1);
    printf("Palabra invertida: %s", palabra2);

    if (strcmp(palabra1,palabra2) == 0)
    {
        printf("La palabra es cap-i-cua");
    }else{
        printf("La palabra no es cap-i-cua");
    }

    return 0;
}
