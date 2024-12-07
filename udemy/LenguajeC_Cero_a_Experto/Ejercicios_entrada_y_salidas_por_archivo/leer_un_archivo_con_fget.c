#include <stdio.h>

/*
Tomar el archivo de texto (.txt) creado anteriormente y con la
función fgetc() leer todo su contenido
*/

int main(){

    // Variables
    FILE *archivo;
    int c;
    char direccion[] = "test1.txt";
    archivo = fopen(direccion,"rt"); // rt --> read text, leer texto

    if (archivo == NULL)
    {
        printf("Error al leer un archivo");
        return 1;
    }

    // Procesamos los datos y los mostramos por pantalla
    while ((c = fgetc(archivo)) != EOF)
    {
        if (c == '\n')
        {
            printf("\n");
        }else{
            putchar(c);
        }
    }

    // Cerramos el archivo
    fclose(archivo);

    return 0;
}
