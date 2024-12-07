#include <stdio.h>
#include <string.h>

/*
Cuenta cuantas veces aparece una palabra en un archivo.
*/

int main(){

    // Variables
    int apariciones = 0;

    // Abrimos el fichero, leemos y buscamos la palabra Juan
    FILE* Archivo = fopen("prueba.txt","r");
    if (Archivo == NULL)
    {
        printf("\nError al intentar acceder al archivo\n");
    }else{
        char TextoRecibido[1000];
        char PalabraBuscada[] = "Juan";

        while (fscanf(Archivo,"%s",TextoRecibido) != EOF)
        {
            if (strcmp(TextoRecibido,PalabraBuscada) == 0)
            {
                apariciones++;
            }
        }
    }

    // Cerramos el fichero
    fclose(Archivo);

    // Mostramos el resultado por pantalla
    printf("\nApariciones de la palabra: %d", apariciones);

    return 0;
}
