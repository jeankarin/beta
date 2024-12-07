#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

/*
Hacer un programa para guardar direcciones de correo que muestre un menu
con las siguientes opciones:

1. Crear (nombre, apellidos, email)
2. Agregar más contactos (nombre, apellidos, email)
3. Visualizar contactos existentes
*/

struct datosPersonas
{
    char nombre[30], apellidos[30], email[30];
}datos;

void crear(){
    // Variables
    FILE *archivo;
    char direccion[] = "contactos.txt";
    char rpt;

    // Abrimos el fichero en el puntero
    archivo = fopen(direccion,"wt");

    // Si el puntero tiene valor NULL no lo ha abierto
    if (archivo == NULL)
    {
        printf("No se ha podido abrir / crear el fichero");
    }

    // Agregamos contenido al fichero
    printf("\n\t.:Creando Directorio de eMail:.");
    fprintf(archivo,"\tDirectorio de eMail");

    do
    {
        __fpurge(stdin);
        printf("\nNombre: ");
        fgets(datos.nombre,30,stdin);
        printf("Apellidos: ");
        fgets(datos.apellidos,30,stdin);
        printf("eMail: ");
        fgets(datos.email,30,stdin);

        fprintf(archivo,"\n\nNombre: ");
        fwrite(datos.nombre,1,strlen(datos.nombre), archivo);
        fprintf(archivo,"Apellidos: ");
        fwrite(datos.apellidos,1,strlen(datos.apellidos), archivo);
        fprintf(archivo,"eMail: ");
        fwrite(datos.email,1,strlen(datos.email), archivo);
        printf("Desea agregar mas contactos (s/n): ");
        scanf("%c", &rpt);
    } while (rpt == 's');

    fclose(archivo);
}

void agregar(){

    FILE *archivo;
    char direccion[] = "contactos.txt", rpt;

    archivo = fopen(direccion,"at");

    if (archivo == NULL)
    {
        printf("No hemos podido abrir el fichero");
    }

    printf("\n\t.:Agregando mas contactos:.\n");

    do
    {
        __fpurge(stdin);
        printf("\nNombre: ");
        fgets(datos.nombre,30,stdin);
        printf("Apellidos: ");
        fgets(datos.apellidos,30,stdin);
        printf("eMail: ");
        fgets(datos.email,30,stdin);

        fprintf(archivo,"\n\nNombre: ");
        fwrite(datos.nombre,1,strlen(datos.nombre), archivo);
        fprintf(archivo,"Apellidos: ");
        fwrite(datos.apellidos,1,strlen(datos.apellidos), archivo);
        fprintf(archivo,"eMail: ");
        fwrite(datos.email,1,strlen(datos.email), archivo);
        printf("Desea agregar mas contactos (s/n): ");
        scanf("%c", &rpt);
    } while (rpt == 's');
    
    fclose(archivo);
}

void visualizar(){

    FILE *archivo;
    int c;
    char direccion[] = "contactos.txt";

    archivo = fopen(direccion,"r");

    if (archivo == NULL)
    {
        printf("No se ha podido abrir el fichero");
    }

    printf("\n\t.:Visualizando Contactos:.\n");

    // Leemos el fichero y lo mostramos en pantalla
    while (( c = fgetc(archivo)) != EOF)
    {
        if (c == '\n')
        {
            printf("\n");
        }else{
            putchar(c);
        }
    }
    printf("\n\n");
    
    fclose(archivo);
}

int main(){

    // Variables
    int opc;

    // Solicitamos la información al usuario
    do
    {
        printf("\n\t.:MENU:.");
        printf("\n1. Crear\n2. Agregar mas contactos\n3. Visualizar contactos existentes\n4. Salir");
        printf("\nOpcion: ");
        scanf("%i", &opc);

        switch (opc)
        {
        case 1: crear();break;
        case 2: agregar();break;
        case 3: visualizar();break;
        
        default:
            break;
        }
    } while (opc != 4);

    return 0;
}
