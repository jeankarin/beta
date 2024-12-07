#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

/*
Hacer 2 estructuras una llamada promedio que tendrá los siguientes miembros:
nota1, nota2, nota3 y otra llamada alumno que tendrá los siguientes miembros:
nombre, sexo, edad. Hacer que la estructura promedio este anidada en la estructura alumno.
Luego pedir todos los datos para un alumno.
Calcular su promedio y por último imprimir sus datos, incluidos el promedio.
*/

struct promedio
{
    float nota1, nota2, nota3;
};

struct alumno
{
    char nombre[20], sexo[20];
    int edad;
    struct promedio MyPromedio;
};


int main(){

    // Variables
    struct alumno alumno1;

    // Solicitamos la información al usuario
    printf("Ingrese el nombre del alumno: ");
    fgets(alumno1.nombre,20,stdin);
    strtok(alumno1.nombre,"\n");

    printf("Ingrese el sexo del alumno: ");
    fgets(alumno1.sexo,20,stdin);
    strtok(alumno1.sexo,"\n");

    printf("Ingrese la edad del alumno: ");
    scanf("%d", &alumno1.edad);

    printf("Ingrese las notas: \n");
    printf("Nota 1: ");
    scanf("%f", &alumno1.MyPromedio.nota1);
    printf("Nota 2: ");
    scanf("%f", &alumno1.MyPromedio.nota2);
    printf("Nota 3: ");
    scanf("%f", &alumno1.MyPromedio.nota3);

    // Procesamos los datos y los mostramos por pantalla
    printf("\nLos datos del alumno con su promedio son: ");
    printf("\nNombre: %s", alumno1.nombre);
    printf("\nSexo: %s", alumno1.sexo);
    printf("\nEdad: %d", alumno1.edad);
    printf("\nEstas son sus notas: ");
    printf("\nNota 1: %.2f", alumno1.MyPromedio.nota1);
    printf("\nNota 2: %.2f", alumno1.MyPromedio.nota2);
    printf("\nNota 3: %.2f", alumno1.MyPromedio.nota3);
    printf("\nEl promedio de las notas es: %.2f\n", (alumno1.MyPromedio.nota1 + alumno1.MyPromedio.nota2 + alumno1.MyPromedio.nota3) / 3);

    return 0;
}
