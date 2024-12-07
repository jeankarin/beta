#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

/*
Crea un programa en C, que pueda seguir aregando contactos de email,
hacia el archivo que creamos en el programa.
*/

struct datosPersona
{
    char nombre[50], apellidos[50], email[50];
}datos;


int main(){

    // Variables
    FILE *archivo;
    char misDirecciones[] = "misdirecciones.txt";
    char rpt;

    // Solicitamos la información al usuario
    archivo = fopen(misDirecciones,"at");
    // at --> add text, agregar texto

    if(archivo == NULL)
    {
        printf("Error al tratar de localizar el archivo");
        return 1;
    }

    printf("\t.:Agregando mas contactos de email:.\n");

    do
    {
        __fpurge(stdin);
        printf("\nNombre: ");
        fgets(datos.nombre,50,stdin);
        printf("\nApellidos: ");
        fgets(datos.apellidos,50,stdin);
        printf("\neMail: ");
        fgets(datos.email,50,stdin);

        // Escribimos al fichero
        fprintf(archivo,"\nNombre: ");
        fwrite(datos.nombre,1,strlen(datos.nombre),archivo);
        fprintf(archivo,"Apellidos: ");
        fwrite(datos.apellidos,1,strlen(datos.apellidos),archivo);
        fprintf(archivo,"eMail: ");
        fwrite(datos.email,1,strlen(datos.email),archivo);
        
        printf("Desea seguir agregando mas contactos (s/n): ");
        scanf("%c", &rpt);
    } while (rpt == 's');

    // Cerramos el archivo
    fclose(archivo);

    return 0;
}
