#include <stdio.h>

/*
Utilizar la función fopen() para determinar si existe un archivo de texto (.txt) o no
*/

int main(){

    // Variables
    FILE *archivo;
    char direccion[] = "prueba.txt";

    archivo = fopen(direccion,"r");

    // Comprobamos si existe el fichero
    if (archivo == NULL)
    {
        printf("El fichero no existe");
        return 1;
    }else{
        printf("El fichero existe en la ruta %s", direccion);
    }

    return 0;
}
