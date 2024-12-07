#include <stdio.h>
#include <string.h>

/*
Saber si una palabra es cap-i-cua.
*/

int main(){

    // Variables
    char palabra1[] = "hannah", palabra2[30];

    // Procesamos los datos y los mostramos por pantalla
    strcpy(palabra2,palabra1);

    strrev(palabra2); // Invierte la palabra

    if (strcmp(palabra1,palabra2) == 0)
    {
        printf("Es una palabra cap-i-cua");
    }else{
        printf("No es cap-i-cua");
    }

    return 0;
}
