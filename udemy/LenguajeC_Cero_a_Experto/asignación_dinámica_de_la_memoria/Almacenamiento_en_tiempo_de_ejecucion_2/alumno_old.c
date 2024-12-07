#include "alumno.h"

/*
Informativo de los pasos y pruebas que hemos estado haciendo sobre la gestión de memoria.
*/

//void llenarAlumno(alumno *din){}

int main(){

    // variables
    printf("Tamanyo de objeto Alumno = %ld\n", sizeof(alumno));
    alumno *din1, *din2, *din3;

    // Reservamos la memoria para nuestro alumno
    din1 = (alumno *)malloc(5 * sizeof(alumno)); // Podemos almacenar 5 alumnos.
    din2 = (alumno *)calloc(5,sizeof(alumno)); // Podemos almacenar 5 alumnos.

    // Mostramos posición de memoria de los apuntadores.
    printf("\n.:Primer apuntador:.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Direccion[%d] = %p\n", i, din1 + i);
    }printf("\n");

    printf("\n.:Segundo apuntador:.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Direccion[%d] = %p\n", i, din2 + i);
    }printf("\n");


    // Realloc
    din3 = (alumno *)realloc(din2,10*sizeof(alumno)); // Ahora podemos guardar 10 alumnos
    printf("\n.:Tercer apuntador, mismo que din2:.\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Direccion[%d] = %p\n", i, din3 + i);
    }printf("\n");

    free(din1);
    // free(din2); // din2 se libera, con el realloc de din3 ya que es lo mismo.
    free(din3);
    
    return 0;
}