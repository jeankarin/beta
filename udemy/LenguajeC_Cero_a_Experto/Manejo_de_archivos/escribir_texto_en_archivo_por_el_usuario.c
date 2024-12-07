#include <stdio.h>

/*
Escribir el texo del usuario en un fichero
*/

int main(){

    // Variables
    FILE* archivo = fopen("prueba.txt","a");

    // Solicitamos la información al usuario
    if (archivo == NULL)
    {
        printf("Error al intentar crear / abrir el archivo");
    }
    else
    {
        char letra;
        // Mientras que el usuario no presione enter
        while ((letra = getchar()) != '\n')
        {
            fputc(letra,archivo); // Escribe lo que digite en un archivo
        }
    }

    // Procesamos los datos y los mostramos por pantalla
    fclose(archivo);

    return 0;
}
