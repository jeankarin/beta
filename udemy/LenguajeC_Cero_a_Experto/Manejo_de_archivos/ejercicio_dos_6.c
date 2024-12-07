#include <stdio.h>

/*
Utilizar la función fputc() para introducir carácteres en un archivo de texto (.txt)
fputc(c,puntero_archivo);
*/

int main(){

    // Variables
    FILE *archivo;
    int c;
    char direccion[] = "prueba.txt";

    archivo = fopen(direccion,"wt");

    if (archivo == NULL)
    {
        printf("No se ha podido abrir / crear el archivo");
        return 1;
    }
    
    // Guardamos los carácteres en el fichero
    while (( c = getchar()) != EOF)
    {
        fputc(c,archivo);
    }

    // Cerramos el fichero
    fclose(archivo);

    return 0;
}
