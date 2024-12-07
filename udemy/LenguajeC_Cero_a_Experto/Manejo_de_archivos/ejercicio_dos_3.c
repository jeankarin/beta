#include <stdio.h>

/*
Tomar un archivo (.txt) creado y con la función fgetc,
leer todo su contenido.
*/

int main(){

    // Variables
    FILE *archivo;
    int c;
    char direccion[] = "prueba.txt";
    archivo = fopen(direccion,"rt"); // rt --> read text, leer texto

    if (archivo == NULL)
    {
        printf("El archivo no se ha podido cargar para leer");
        return 1;
    }
    
    // Leemos el fichero
    while (( c = fgetc(archivo) ) != EOF)
    {
        if ( c == '\n'){
            printf("\n");
        }else{
            putchar(c);
        }
    }

    fclose(archivo);

    return 0;
}
