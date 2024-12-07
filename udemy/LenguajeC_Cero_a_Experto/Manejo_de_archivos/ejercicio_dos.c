#include <stdio.h>

/*
Crear un archivo de texto, ponerle el texto que deseas y 
luego crear un programa en C para agregarle más texto al archivo.
Rutas: D:\\LocalDev\\C
*/

int main(){

    // Variables
    FILE *archivo;
    int c;
    char direccion[] = "D:\\LocalDev\\C\\prueba.txt";
    archivo = fopen(direccion,"at"); //at --> add text, añadir texto.

    if (archivo == NULL)
    {
        printf("Error al tratar de abrir / crear el archivo");
    }

    // Añadimos texto al fichero
    while ((c = getchar()) != EOF)
    {
        fputc(c,archivo);
    }

    return 0;
}