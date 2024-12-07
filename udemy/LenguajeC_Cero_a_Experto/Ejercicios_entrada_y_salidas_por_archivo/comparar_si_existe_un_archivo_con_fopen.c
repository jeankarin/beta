#include <stdio.h>

/*
Utilizar la función fopen(), para determinar si existe un archivo de texto (.txt) o no.
fopen (nombre_de_archivo,modo);
*/

int main(){

    // Variables
    FILE *archivo;
    char direccion[] = "test.txt";
    archivo = fopen(direccion,"r"); // r --> read (leer)

    // Procesamos los datos y los mostramos por pantalla
    if (archivo == NULL)
    {
        printf("El archivo no existe");
    }else{
        printf("Se encontro el archivo\n");
        printf("Su ubicacion es: %s", direccion);
    }

    fclose(archivo);

    return 0;
}
