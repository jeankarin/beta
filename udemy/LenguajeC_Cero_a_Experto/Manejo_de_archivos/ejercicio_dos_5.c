#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

/*
Crear un archivo de texto (.txt), dónde guardar los emails de amigos

fprintf(puntero,información);
fwrite(dato a guardar,tamaño,longitud,puntero);
*/

struct datosPersona
{
    char nombre[30], apellidos[30], email[30];
}datos;


int main(){

    // Variables
    FILE *archivo;
    char direccion[] = "direcciones.txt";
    char rpt;
    archivo = fopen(direccion,"wt");

    if (archivo == NULL)
    {
        printf("No existe el fichero o no se ha podido crear");
        return 1;
    }
    
    printf("\t.:EMAIL DE AMIGOS:.");
    fprintf(archivo,"\t.:EMAIL DE AMIGOS:.");

    // Solicitamos la información al usuario
    do
    {
        __fpurge(stdin);
        printf("\nNombre: ");
        fgets(datos.nombre,30,stdin);
        printf("Apellidos: ");
        fgets(datos.apellidos,30,stdin);
        printf("eMail: ");
        fgets(datos.email,30,stdin);

        // guardamos los registros en el fichero con fprintf (fprintf --> Escribe una salida con formato en el archivo)
        fprintf(archivo,"\n\nNombre: ");
        fwrite(datos.nombre,1,strlen(datos.nombre),archivo);
        fprintf(archivo,"Apellidos: ");
        fwrite(datos.apellidos,1,strlen(datos.apellidos),archivo);
        fprintf(archivo,"eMail: ");
        fwrite(datos.email,1,strlen(datos.email),archivo);

        // Solicitamos al usuario si quiere guardar más datos.
        printf("Desea guardar mas datos (s/n): ");
        scanf("%c", &rpt);
    } while (rpt == 's');

    // Cerramos el fichero
    fclose(archivo);

    return 0;
}
