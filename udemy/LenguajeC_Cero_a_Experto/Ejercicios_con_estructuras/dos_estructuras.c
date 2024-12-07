#include <stdio.h>

/*
Hacer 2 estrucutras, una llamada promedio que tendrá los siguientes miembros:
nota1, nota2, nota3. Y otra llamada alumno que tendrá los siguientes miembros:
nombre, edad, sexo. Hacer que la estructura promedioesté anidada en la estructura
alumno. Luego pedir todos los datos para un alumno, calcular su promedio y por último
imprimir todos sus datos, incluidos el promedio.
*/

struct promedio
{
    float nota1, nota2, nota3;
};

struct alumno
{
    char nombre[20], sexo[20];
    int edad;
    struct promedio notasPromedio;
};


int main(){

    // Variables
    struct alumno alumno1;
    float promedio;

    // Solicitamos la información al usuario
    printf("\nIntroduce los datos del alumno\n");
    printf("Ingrese el nombre: ");
    scanf("%s", alumno1.nombre);
    printf("Ingrese la edad: ");
    scanf("%d", &alumno1.edad);
    printf("Ingrese el sexo: ");
    scanf("%s", alumno1.sexo);
    printf("Ingre las notas del alumno\n");
    printf("Notas 1: ");
    scanf("%f", &alumno1.notasPromedio.nota1);
    printf("Notas 2: ");
    scanf("%f", &alumno1.notasPromedio.nota2);
    printf("Notas 3: ");
    scanf("%f", &alumno1.notasPromedio.nota3);

    // Procesamos los datos y los mostramos por pantalla
    promedio = (alumno1.notasPromedio.nota1 + alumno1.notasPromedio.nota2 + alumno1.notasPromedio.nota3) / 3;

    printf("\n\nMostramos los datos del alumno\n");
    printf("\nNombre: %s", alumno1.nombre);
    printf("\nEdad: %d", alumno1.edad);
    printf("\nSexo: %s", alumno1.sexo);
    printf("\nSus notas más su promedio:");
    printf("\nNota1: %.2f", alumno1.notasPromedio.nota1);
    printf("\nNota2: %.2f", alumno1.notasPromedio.nota2);
    printf("\nNota3: %.2f", alumno1.notasPromedio.nota3);
    printf("\nSu promedio es: %.2f\n", promedio);

    return 0;
}
