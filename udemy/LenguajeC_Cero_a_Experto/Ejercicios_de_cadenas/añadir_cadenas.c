#include <stdio.h>
#include <string.h>

/*
Pedir una cadena al usuario, posteriormente utilizar la función strcat() para
añadir la frase "Que tengas un buen dia", al final de la cadena.
*/

int main(){

    // Variables
    char palabra[100];

    // Solicitamos la información al usuario
    printf("Introduce un texto: ");
    fgets(palabra,100,stdin);
    strtok(palabra,"\n");

    // Procesamos los datos y los mostramos por pantalla
    strcat(palabra," Que tengas un buen dia\n");
    printf("%s", palabra);

    return 0;
}
