#include <stdio.h>
#include <string.h>

/*

*/

struct Direccion
{
    char calle[30];
    short numero;
    char colonia[20];
    int CP;
};

struct Alumno
{
    int numCuenta;
    char nombre[25];
    char apellido[25];
    float promedio;
    struct Direccion mydireccion;
};


int main(){

    // Variables
    struct Alumno alumno1;

    // Solicitamos la información al usuario
    strcpy(alumno1.nombre,"Juan A.");
    strcpy(alumno1.apellido,"Horrillo");
    alumno1.numCuenta = 12345;
    alumno1.promedio = 8.9;
    strcpy(alumno1.mydireccion.calle,"Josep Ricart");
    alumno1.mydireccion.numero = 49;
    strcpy(alumno1.mydireccion.colonia,"Los abetos");
    alumno1.mydireccion.CP = 8980;

    // Procesamos los datos y los mostramos por pantalla
    printf("Nombre: %s\n", alumno1.nombre);
    printf("Apellido: %s\n", alumno1.apellido);
    printf("Numero de cuenta: %d\n", alumno1.numCuenta);
    printf("El promedio de sus notas es: %.2f\n", alumno1.promedio);
    printf("Direccion: %s\n", alumno1.mydireccion.calle);
    printf("Numero: %d\n", alumno1.mydireccion.numero);
    printf("Colonia: %s\n", alumno1.mydireccion.colonia);
    printf("Codigo Postal: %d\n", alumno1.mydireccion.CP);

    return 0;
}
