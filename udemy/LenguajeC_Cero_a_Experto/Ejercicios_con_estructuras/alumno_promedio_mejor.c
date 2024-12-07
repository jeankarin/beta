#include <stdio.h>
#include <string.h>

/*
pedir los datos para N alumnos y calcular cual de todos tiene
el mejor promedio e imprimir sus datos
*/

struct promedio
{
    float nota1, nota2, nota3;
};

struct alumno
{
    char nombre[20], sexo[20];
    int edad;
    struct promedio prom;
}alumnos[10];


int main(){

    // Variables
    int promedioMayor = 0, totalAlumnos, alumnoPMayor = 0;
    float promediosAlumnos[10];

    // Solicitamos la información al usuario
    printf("Escribe el total de Alumnos: ");
    printf("\nSolo he creado espacio para 10, no coger más\n");
    scanf("%d", &totalAlumnos);

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 0; i < totalAlumnos; i++)
    {
        fflush(stdin);
        printf("\nEscribe el nombre del alumno %d (Sin espacios): ", i + 1);
        scanf("%s", alumnos[i].nombre);
        strtok(alumnos[i].nombre,"\n");
        fflush(stdin);
        printf("\nEdad: ");
        scanf("%d", &alumnos[i].edad);
        fflush(stdin);
        printf("\nSexo: ");
        scanf("%s", alumnos[i].sexo);
        fflush(stdin);
        printf("\nCalificaciones del alumno %d: ", i + 1);
        printf("\nCalificacion 1: ");
        scanf("%f", &alumnos[i].prom.nota1);
        printf("\nCalificacion 2: ");
        scanf("%f", &alumnos[i].prom.nota2);
        printf("\nCalificacion 3: ");
        scanf("%f", &alumnos[i].prom.nota3);
        printf("\n\n");
        promediosAlumnos[i] = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3) / 3;

        if (promediosAlumnos[i] > promedioMayor)
        {
            promedioMayor = promediosAlumnos[i];
            alumnoPMayor = i;
        }
    }

    printf("\nEl alumno con el promedio mayor es: %s", alumnos[alumnoPMayor].nombre);
    printf("\nCon un promedio de %d\n", promedioMayor);

    return 0;
}
