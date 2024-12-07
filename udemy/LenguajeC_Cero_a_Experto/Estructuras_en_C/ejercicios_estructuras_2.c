#include <stdio.h>
#include <string.h>

/*
Crear la estrucutra Asignatura
Agregar a la estrucutra alumno un array de asignaturas
Inicializar alumnos con sus respectivas materias
Permitir al usuario ver las materias
Permitir al usuario modificarlas
Permitir al usuario crear alumnos con sus materias desde cero
*/

struct asignatura
{
    char materia[30];
};

struct alumno
{
    struct asignatura asignaturas[5];
};

int main(){

    // Variables
    struct alumno Juan, Justo, nuevoAlumno;
    char alumnoNuevo[20], materia0[20];

    int opcion, alumno;

    // Procesamos los datos y los mostramos por pantalla
    strcpy(Juan.asignaturas[0].materia,"Matematicas");
    strcpy(Juan.asignaturas[1].materia,"Fisica");
    strcpy(Juan.asignaturas[2].materia,"Quimica");

    strcpy(Justo.asignaturas[0].materia,"Musica");
    strcpy(Justo.asignaturas[1].materia,"Ingles");
    strcpy(Justo.asignaturas[2].materia,"Programacion");

    printf("\nEste programa permite ver las materias, modificarlas y crear alumnos\n");
    printf("1- Ver materias\n2- Modificar las materias\n3- Crear Alumnos\n0- Salir\n");
    printf("Elige una opcion: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Seleccionaste ver materias\n");
        printf("Que alumno quieres: ");
        printf("\n1- Juan\n2- Justo\3- %s", alumnoNuevo);
        scanf("%d", &alumno);
        switch (alumno)
        {
        case 1:
            printf("Escogiste el alumno Juan\n");
            printf("Sus materias son:\n1- %s\n2- %s\n3- %s\n", Juan.asignaturas[0].materia,Juan.asignaturas[1].materia,Juan.asignaturas[2].materia);
            break;
        case 2:
            printf("Escogiste el alumno Justo\n");
            printf("Sus materias son:\n1- %s\n2- %s\n3- %s\n", Justo.asignaturas[0].materia,Justo.asignaturas[1].materia,Justo.asignaturas[2].materia);
            break;        
        default:
            break;
        }
        break;
    case 2:
        printf("Seleccionaste modificar las materias\n");
        printf("Que alumno quieres: ");
        printf("\n1- Juan\n2- Justo\n\3- %s", alumnoNuevo);
        scanf("%d", &alumno);
        switch (alumno)
        {
        case 1:
            printf("Escogiste el alumno Juan\n");
            printf("Sus materias son:\n1- %s\n2- %s\n3- %s\n", Juan.asignaturas[0].materia,Juan.asignaturas[1].materia,Juan.asignaturas[2].materia);
            printf("Selecciona que materia quieres modificar: ");
            scanf("%d", &opcion);
            switch (opcion)
            {
            case 1:
                printf("Escogiste la materia %s\n", Juan.asignaturas[0].materia);
                printf("Escribe el nombre de la nueva materia\n");
                scanf("%s", materia0);
                strcpy(Juan.asignaturas[0].materia,materia0);
            case 2:
                printf("Escogiste la materia %s\n", Juan.asignaturas[1].materia);
                printf("Escribe el nombre de la nueva materia\n");
                scanf("%s", materia0);
                strcpy(Juan.asignaturas[1].materia,materia0);
                break;
            case 3:
                printf("Escogiste la materia %s\n", Juan.asignaturas[2].materia);
                printf("Escribe el nombre de la nueva materia\n");
                scanf("%s", materia0);
                strcpy(Juan.asignaturas[2].materia,materia0);
                break;
            default:
                break;
            }
            break;
        case 2:
            printf("Escogiste el alumno Justo\n");
            printf("Sus materias son:\n1- %s\n2- %s\n3- %s\n", Justo.asignaturas[0].materia,Justo.asignaturas[1].materia,Justo.asignaturas[2].materia);
            printf("Selecciona que materia quieres modificar: ");
            scanf("%d", &opcion);
            switch (opcion)
            {
            case 1:
                printf("Escogiste la materia %s\n", Justo.asignaturas[0].materia);
                printf("Escribe el nombre de la nueva materia\n");
                scanf("%s", materia0);
                strcpy(Justo.asignaturas[0].materia,materia0);
            case 2:
                printf("Escogiste la materia %s\n", Justo.asignaturas[1].materia);
                printf("Escribe el nombre de la nueva materia\n");
                scanf("%s", materia0);
                strcpy(Justo.asignaturas[1].materia,materia0);
                break;
            case 3:
                printf("Escogiste la materia %s\n", Justo.asignaturas[2].materia);
                printf("Escribe el nombre de la nueva materia\n");
                scanf("%s", materia0);
                strcpy(Justo.asignaturas[2].materia,materia0);
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
        break;
    case 3:
        printf("\nSeleccionate crear alumno\n");
        printf("Escribe el nombre del alumno nuevo\n");
        scanf("%s", alumnoNuevo);
        printf("escribe el nombre de las tres materias para el alumno nuevo\n");
        scanf("%s", nuevoAlumno.asignaturas[0].materia);
        scanf("%s", nuevoAlumno.asignaturas[1].materia);
        scanf("%s", nuevoAlumno.asignaturas[2].materia);
        printf("El alumno %s tiene estas materias\n", alumnoNuevo);
        printf("1- %s\n2- %s\n3- %s", nuevoAlumno.asignaturas[0].materia,nuevoAlumno.asignaturas[1].materia,nuevoAlumno.asignaturas[2].materia);
        break;
    case 0:
        break;
    default: printf("\nOpcion incorrecta\n");
        break;
    }

    return 0;
}
