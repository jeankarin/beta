#include <stdio.h>

/*
Agregar texto a un archivo txt
*/

int main(){

    // Variables
    FILE *archivo;
    int c;
    char fichero[] = "curso_c.txt";

    // Solicitamos la información al usuario
    archivo = fopen(fichero,"at");

    if (archivo == NULL){
        printf("Error al intentar acceder / crear el fichero");
        return 1;
    }

    // Escribimos cada caracter en el fichero
    /* Para dejar de escribir, salir y que se guarden los canvios en LINUX
    apretamos Ctrl+D, el profe en Windows dice que es Ctrl+Z, pero no me funciona
    */
    while ((c = getchar()) != EOF)
    {
        fputc(c,archivo);
    }

    // Cerramos el fichero
    fclose(archivo);

    return 0;
}
