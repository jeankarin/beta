#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

/*
Crear un archivo de texto (.txt) dónde guardar los eMails de amigos.

fprintf(puntero,información);
fwrite(datoAGuardar,Tamaño,Longitud,puntero);
*/

struct datosUsuario
{
    char nombre[30], apellido[30], email[30];
}datos;


int main(){

    // Variables
    // También podemos definir la variable "datos" de la siguiente manera:
    // struct datosUsuario datos;
    FILE *archivo;
    char direccion[] = "contactos.txt", rpt;
    archivo = fopen(direccion,"wt"); // wt --> write text, escribir texto

    if (archivo == NULL)
    {
        printf("No se ha podido abrir / crear el fichero.");
        return 1;
    }

    printf("\t.:AGENDA eMAILS:.\n");
    fprintf(archivo,"\t.:AGENDA eMAILS:.\n");

    do
    {
        // Solicitamos la información al usuario
        __fpurge(stdin);
        printf("Ingrese Nombre: ");
        fgets(datos.nombre,30,stdin);
        strtok(datos.nombre,"\n");

        __fpurge(stdin);
        printf("Ingrese Apellido: ");
        fgets(datos.apellido,30,stdin);
        strtok(datos.apellido,"\n");

        __fpurge(stdin);
        printf("Ingrese eMail: ");
        fgets(datos.email,30,stdin);
        strtok(datos.email,"\n");

        // Escribimos los datos en el fichero
        fprintf(archivo,"\nNombre: ");
        fwrite(datos.nombre,1,strlen(datos.nombre),archivo);
        fprintf(archivo,"\nApellidos: ");
        fwrite(datos.apellido,1,strlen(datos.apellido),archivo);
        fprintf(archivo,"\neMail: ");
        fwrite(datos.email,1,strlen(datos.email),archivo);

        printf("\nQuieres agregar mas contactos (s/n): ");
        scanf("%c", &rpt);

    } while (rpt == 's');

    // Procesamos los datos y los mostramos por pantalla

    return 0;
}
