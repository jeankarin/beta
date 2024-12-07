#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

/*
Pedir al usuario, nombre, apellidos y ciudad dónde vive.
Posteriormente convertir todo a MAYUSCULAS e imprimir los datos.
(utilizar una estructura)
*/

struct misDatos
{
    char nombre[30], apellidos[30], ciudad[30];
};


int main(){

    // Variables
    struct misDatos miDato;

    // Solicitamos la información al usuario
    __fpurge(stdin);
    printf("Escribe tu nombre: ");
    fgets(miDato.nombre,30,stdin);
    strtok(miDato.nombre,"\n");

    __fpurge(stdin);
    printf("Escribe tu apellido: ");
    fgets(miDato.apellidos,30,stdin);
    strtok(miDato.apellidos,"\n");

    __fpurge(stdin);
    printf("Escribe tu ciudad: ");
    fgets(miDato.ciudad,30,stdin);
    strtok(miDato.ciudad,"\n");

    // Procesamos los datos y los mostramos por pantalla
    // Convertimos a mayúsculas
    strupr(miDato.nombre); // En Linux no me funciona.
    strupr(miDato.apellidos);
    strupr(miDato.ciudad);

    // Mostramos el resultado por pantalla
    printf("Tu nombre es: %s\n", miDato.nombre);
    printf("Tu apellido es: %s\n", miDato.apellidos);
    printf("Tu ciudad es: %s\n", miDato.ciudad);

    return 0;
}
