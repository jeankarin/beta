#include <stdio.h>

/*
Utilizar la función fputc() para introducir caracteres
en un archivo de texto (.txt)
*/

int main(){

    // Variables
    FILE *archivo;
    int c;
    char direccion[] = "test1.txt";
    archivo = fopen(direccion,"wt"); // wt --> write text -- escribir texto

    // Procesamos los datos y los mostramos por pantalla
    if (archivo == NULL)
    {
        printf("Error al crear el archivo\n");
        return 1;
    }
    
    // Escribimos carácter a carácter en el fichero
    while ((c = getchar()) != EOF) //Para salir Ctrl+D en Linux ó Ctrl+Z en Windows.
    {
        fputc(c,archivo);
    }

    // Cerramos el fichero
    fclose(archivo);

    return 0;
}
