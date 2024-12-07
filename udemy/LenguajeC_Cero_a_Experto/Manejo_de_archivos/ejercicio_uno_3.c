#include <stdio.h>

/*
Hacer un programa que cree un archivo de texto (.txt)
*/

int main(){

    // Variables
    FILE *archivo;
    char myDirection[] = "mifichero_c.txt";

    // Solicitamos la información al usuario
    archivo = fopen(myDirection,"w"); // w --> Crea si no existe y sobreescribe si existe

    if (archivo == NULL)
    {
        printf("No se ha podido abrir / crear el fichero");
        return 1;
    }else{
        printf("Fichero creado");
        printf("\nUbicacion: %s", myDirection);
    }

    return 0;
}
