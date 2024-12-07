#include <stdio.h>

/*
Hacer un programa en C, que cree 2 archivos de texto (.txt), y luego utilizar
la función fclose() para cerrarlos.
D:\\LocalDev\\C\\
*/

int main(){

    // Variables
    FILE *archivo1, *archivo2;
    archivo1 = fopen("D:\\LocalDev\\C\\fichero1.txt","wt"); // wt --> write text, escribir texto
    archivo2 = fopen("D:\\LocalDev\\C\\fichero2.txt","wt");

    if (archivo1 == NULL || archivo2 == NULL){
        printf("No se pudo crear los archivos");
    }else{
        printf("Exito al crear los archivos");
    }

    // Utilizamos la funcion fclose para cerrar los ficheros.
    fclose(archivo1);
    fclose(archivo2);

    return 0;
}