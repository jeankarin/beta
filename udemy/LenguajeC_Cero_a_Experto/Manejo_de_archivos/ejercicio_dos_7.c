#include <stdio.h>

/*
leer contenido de un archivo
*/

int main(){

    // Variables
    FILE *archivo;
    char direccion[] = "prueba.txt";
    int c;

    // Abrimos el fichero
    archivo = fopen(direccion,"rt");

    if (archivo == NULL)
    {
        printf("Error al tratar de leer el archivo");
        return 1;
    }

    // Leemos el fichero y guardamos el contenido en C para luego mostrar por pantalla con putchar()
    while (( c = fgetc(archivo)) != EOF)
    {
        if (c == '\n')
        {
            printf("\n");
        }else{
            putchar(c);
        }
    }
    
    // Cerramos el fichero
    fclose(archivo);

    return 0;
}
