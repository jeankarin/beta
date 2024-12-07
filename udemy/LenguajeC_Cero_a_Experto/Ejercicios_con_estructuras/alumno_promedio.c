#include <stdio.h>

/*
Hacer una estructura llamada alumno, en la cual se tendran los
siguientes miembros: Nombre, edad, promedio, pedir datos al usuario
para 3 alumnos, comprobar cual de los 3 tiene el promedio mejor y
posteriormente imprimir los datos del alumno
*/

struct alumno
{
    char nombre[50];
    int edad;
    float promedio;
}alumnos[3];


int main(){

    // Variables
    float maxPromedio = 0.0;
    int posicion = 0;

    // Solicitamos la información al usuario
    printf("Facilite la información de los alumnos:\n");
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("Nombre (sin espacios): ");
        scanf("%s", alumnos[i].nombre);
        fflush(stdin);
        printf("Edad: ");
        scanf("%d", &alumnos[i].edad);
        printf("Promedio: ");
        fflush(stdin);
        scanf("%f", &alumnos[i].promedio);
        printf("\n");
    }
    
    // Procesamos los datos y los mostramos por pantalla
    for (int i = 0; i < 3; i++)
    {
        if (alumnos[i].promedio > maxPromedio){
            maxPromedio = alumnos[i].promedio;
            posicion = i;
        }
    }

    printf("El alumno con el mejor promedio es %s con %.2f\n", alumnos[posicion].nombre,alumnos[posicion].promedio);

    return 0;
}
