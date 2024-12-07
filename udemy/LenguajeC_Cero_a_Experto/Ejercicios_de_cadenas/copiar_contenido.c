#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

/*
Pedir al usuario que digite una cadena, luego copiar su contenido
hacia otro array de caracteres. Y por último modificar su mensaje
poniendo a partir de la posición 10 "Buena broma"
*/

int main(){

    // Variables
    char frase1[50], frase2[50];

    // Solicitamos la información al usuario
    __fpurge(stdin);
    printf("Digita tu frase: ");
    fgets(frase1,50,stdin);
    strtok(frase1,"\n");

    // Procesamos los datos y los mostramos por pantalla
    strcpy(frase2,frase1);
    strcpy(frase2 + 10, "Buena broma");

    printf("La frase es: %s\n", frase2);

    return 0;
}
