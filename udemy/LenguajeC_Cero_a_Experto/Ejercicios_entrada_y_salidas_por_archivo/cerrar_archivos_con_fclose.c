#include <stdio.h>

/*
Abrir dos archivos de texto (.txt) después cerrar cada uno de ellos con fclose()
*/

int main(){

    // Variables
    FILE *archivo1, *archivo2;
    char direccion1[] = "test1.txt", direccion2[] = "test2.txt";
    archivo1 = fopen(direccion1,"a+"); // Añade un archivo de texto de lectura y escritura
    archivo2 = fopen(direccion2,"a+");

    // Procesamos los datos y los mostramos por pantalla
    if (archivo1 == NULL || archivo2 == NULL)
    {
        printf("No se ha podido comprobar los archivos");
    }else{
        printf("Se ha podido comprobar los archivos");
    }

    // Cerrar los archivos
    fclose(archivo1);
    fclose(archivo2);

    return 0;
}
