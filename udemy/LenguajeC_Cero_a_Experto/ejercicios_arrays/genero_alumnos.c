#include <stdio.h>
#include <string.h>

/*
Realice un programa que lea en un array el sexo de los N estudiantes
del curso y que determine cuantos hombres y mujeres se encuentran en
el grupo, suponiendo que los datos son extraidos alumno por alumno.
*/

void alumnosporSexo(int num){
    char alumnos[100];
    int hombre, mujer;
    hombre = mujer = 0;

    for (int i = 0; i < num; i++)
    {
        fflush(stdin);
        printf("Ingrese el sexo del alumno %d: ", i);
        fgets(alumnos,100,stdin);
        strtok(alumnos,"\n");

        if (strcmp(alumnos,"hombre") == 0){
            hombre++;
        }else if (strcmp(alumnos, "mujer") == 0){
            mujer++;
        }
    }

    // Mostramos los resultados por pantalla
    printf("\nHay un total de %d hombre/s", hombre);
    printf("\nHay un total de %d mujer/es", mujer);
}

int main(){

    // Variables
    int numero;

    // Solicitamos la información al usuario
    printf("Cuantos alumnos hay: ");
    scanf("%d", &numero);
    fflush(stdin);

    // Procesamos los datos y los mostramos por pantalla
    alumnosporSexo(numero);

    return 0;
}
