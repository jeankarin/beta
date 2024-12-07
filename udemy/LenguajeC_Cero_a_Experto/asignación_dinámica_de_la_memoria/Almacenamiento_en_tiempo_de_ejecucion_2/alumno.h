#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h> // Solo linux

typedef struct direccion
{
    char calle[20];
    int num, cpostal;

}direccion;

typedef struct alumno
{
    int numCuenta;
    char nombre[30], apellido[30];
    float promedio;
    direccion domicilio;

}alumno;

alumno crearAlumno(int numCuenta, char* nombre, char* apellido, float promedio, char* calle, int num, int cpostal){
    
    alumno alumnoCreado;

    alumnoCreado.numCuenta = numCuenta;
    strcpy(alumnoCreado.nombre, nombre);
    strcpy(alumnoCreado.apellido, apellido);
    alumnoCreado.promedio = promedio;
    strcpy(alumnoCreado.domicilio.calle, calle);
    alumnoCreado.domicilio.num = num;
    alumnoCreado.domicilio.cpostal = cpostal;

    return alumnoCreado;
}

void imprimirAlumno(alumno alumnoPrint){
    printf("Numero de cuenta: %d\n", alumnoPrint.numCuenta);
    printf("Nombre: %s\n", alumnoPrint.nombre);
    printf("Apellidos: %s\n", alumnoPrint.apellido);
    printf("Promedio de notas: %.2f\n", alumnoPrint.promedio);
    printf("Direccion del alumno\n");
    printf("Calle: %s\n", alumnoPrint.domicilio.calle);
    printf("Numero: %d\n", alumnoPrint.domicilio.num);
    printf("Codigo postal: %d\n", alumnoPrint.domicilio.cpostal);
}