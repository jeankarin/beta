#include <stdio.h>

/*
Utilizar fopen(), para determinar si existe un archivo de texto. (.txt)

fopen(nombre_archivo,modo);
nombre_archivo = cadena ... Contiene el identificador externo del archivo.
modo = cadena ... Contiene el modo en que va a ser tratado el archivo.
*/

int main(){

    // Variables
    FILE *fd;
    char direccion[] = "/home/jeankarin/DevLocal/C_pasar_ITSupport/prueba.txt"; // En Windows poner c://Users//jeankarin...

    // Procesamos los datos y los mostramos por pantalla
    fd = fopen(direccion,"r"); // "r" = read --> Leer

    if (fd == NULL)
    {
        printf("El archivo no existe\n");
    }else{
        printf("Se encontro el archivo\n");
        printf("Su ubicacion es: %s\n", direccion);
    }

    return 0;
}
