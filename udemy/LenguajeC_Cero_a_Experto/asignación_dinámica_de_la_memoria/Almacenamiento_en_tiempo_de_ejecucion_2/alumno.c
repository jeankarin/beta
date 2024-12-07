#include "alumno.h"

void llenarAlumno(alumno *din){

    __fpurge(stdin);
    printf("Llena los datos del alumno\n");
    printf("Nombre del alumno: ");
    fgets(din->nombre,30,stdin);
    strtok(din->nombre,"\n");
    __fpurge(stdin);
    printf("Apellidos del alumno: ");
    fgets(din->apellido,30,stdin);
    strtok(din->apellido,"\n");
    __fpurge(stdin);
    printf("Numero de cuenta del alumno: ");
    scanf("%d", &din->numCuenta);
    printf("Promedio del alumno: ");
    scanf("%f", &din->promedio);
    __fpurge(stdin);
    printf("Direccion: ");
    fgets(din->domicilio.calle,20,stdin);
    strtok(din->domicilio.calle,"\n");
    __fpurge(stdin);
    printf("Numero: ");
    scanf("%d", &din->domicilio.num);
    __fpurge(stdin);
    printf("Codigo postal: ");
    scanf("%d", &din->domicilio.cpostal);

    // Creamos el alumno con los datos facilitados
    crearAlumno(din->numCuenta,din->nombre,din->apellido,din->promedio,din->domicilio.calle,din->domicilio.num,din->domicilio.cpostal);

    // Mostramos los datos del alumno por pantalla
    printf("\n\n");
    printf("\n.:DATOS DEL ALUMNO.:\n");
    imprimirAlumno(*din);
    printf("\n\n");
}

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

    // Rellenamos los datos de los alumnos.
    llenarAlumno(din1);
    llenarAlumno(din2);

    /* También podemos mostrar los datos del alumno de la siguiente manera:
    printf("\nDatos alumnos\n");
    printf("Nombre %s", din1->nombre);
    printf("Apellidos %s", din1->apellido);
    printf("Numero de cuenta: %d", din1->numCuenta);
    printf("Promedio del alumno: %.2f", din1->promedio);
    */

    /* 
    Como alternativa a free, podemos usuar realloc.
    din1 = (alumno *)realloc(din1,0);
    Al poner 0, libera toda la memoria.
    */
    free(din1);
    // free(din2); // din2 se libera, al liberar el din3, ya que al hacer un realloc din2 y din3 son lo mismo.
    free(din3);
    
    return 0;
}