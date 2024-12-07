#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

/*
Agregar más texto a un archivo (.txt).
*/

int main(){

    // Variables
    FILE *archivo;
    int c;
    char direccion[] = "test.txt";
    archivo = fopen(direccion,"at"); // at --> add text, agregar texo

    if (archivo == NULL)
    {
        printf("No se ha podido abrir el archivo");
        return 1;
    }
    
    // Solicitamos la información al usuario
    while(( c = getchar()) != EOF)
    {
        fputc(c,archivo);
    }

    // Cerramos el fichero
    fclose(archivo);

    return 0;
}
