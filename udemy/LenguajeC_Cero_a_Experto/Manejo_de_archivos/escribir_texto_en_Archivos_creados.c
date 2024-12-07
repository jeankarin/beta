#include <stdio.h>

/*
Escribir texto en un fichero creado.

Un puntero a un archivo es un puntero a una información que define varias cosas
sobre él, incluyendo el nombre, el estado y la posición actual del archivo.
En esencia identifica un archivo especifico y utliza la secuencia asociada para
dirigir el funcionamento de las funciones de E/S con buffer.
Un puntero a un archivo es una variable de tipo puntero al tipo FILE que se define en stdio.h
Un programa necesita utilizar punteros a archivos para leer o escribir en los mismos.
Para obtener una variable de este tipo se utiliza una secuencia como esta: FILE *F;
*/

int main(){

    // Creamos el apuntador y lo igualamos a lo que devuelva fopen
    //! El archivo no existe y se creará automáticamente

    FILE* Archivo = fopen("prueba.txt","a");
    //? Verificacion (NULL es el macro para la memoria nula)

    if (Archivo == NULL){
        printf("Error al intentar crear / acceder al fichero");
    }else{
        // Definimos un texto y lo escribimos en el fichero
        char texto[] = "Hola Mundo";
        fprintf(Archivo,"Texto Escrito: %s", texto); //fprintf --> Escribe una salida con formato en el archivo
    }

    //? Pase lo que pase, cerramos el archivo
    fclose(Archivo);

    return 0;
}