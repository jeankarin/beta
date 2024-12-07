#include <stdio.h>

/*
Crear un archivo de texto (.txt) con el nombre "hola mundo" en la carpeta que elijas.
Y dentro del archivo copiar "Hola y bienvenidos al lenguaje de Programacion C".
*/

int main(){

    // Variables
    FILE *archivo;
    int c;
    char myDirection[] = "hola mundo.txt";
    archivo = fopen(myDirection,"wt"); //wt --> write text

    // Procesamos los datos y los mostramos por pantalla
    if (archivo == NULL)
    {
        printf("No se ha podido abrir / crear el fichero");
        return 1;
    }

    while ((c = getchar()) != EOF)
    {
        fputc(c, archivo);
    }
    
    // Cerramos el fichero
    fclose(archivo);

    return 0;
}
