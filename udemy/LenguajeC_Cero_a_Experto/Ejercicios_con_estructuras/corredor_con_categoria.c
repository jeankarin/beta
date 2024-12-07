#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

/*
hacer una estructura llamada corredor en la cual se tendrán los siguientes miembros:
nombre, edad, sexo, club --> Pedir los datos al usuario para un corredor y asignarle
una categoria de competición.

juvenil <= 18
senyior <= 40
veterano > 40

Posteriormente imprimir todos los datos del corredor incluida su categoria
*/

struct corredor
{
    char nombre[20], sexo[20], club[20], categoria[10];
    int edad;
};

int main(){

    // Variables
    struct corredor corredor1;

    // Solicitamos la información al usuario
    __fpurge(stdin);
    printf("Ingrese nombre del corredor: ");
    fgets(corredor1.nombre,20,stdin);
    strtok(corredor1.nombre,"\n");
    printf("Ingrese el sexo del corredor: ");
    fgets(corredor1.sexo,20,stdin);
    strtok(corredor1.sexo,"\n");
    printf("Ingrese la edad del corredor: ");
    scanf("%d", &corredor1.edad);
    __fpurge(stdin);
    printf("Ingrese el club del corredor: ");
    fgets(corredor1.club,20,stdin);
    strtok(corredor1.club,"\n");

    // Procesamos los datos y los mostramos por pantalla
    if (corredor1.edad <= 18)
    {
        strcpy(corredor1.categoria,"Juvenil");
    }else if (corredor1.edad <= 40)
    {
        strcpy(corredor1.categoria,"Senior");
    }else if (corredor1.edad > 40)
    {
        strcpy(corredor1.categoria,"Veterano");
    }

    printf("\nDatos del corredor: \n");
    printf("Nombre: %s\n", corredor1.nombre);
    printf("Sexo: %s\n", corredor1.sexo);
    printf("Edad: %d\n", corredor1.edad);
    printf("Club: %s\n", corredor1.club);
    printf("Categoria: %s\n\n\n", corredor1.categoria);

    return 0;
}
