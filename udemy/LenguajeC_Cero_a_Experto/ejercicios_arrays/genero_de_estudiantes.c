#include <stdio.h>
#include <string.h>

/*
Realizar un programa que lea en un array el sexo de los N estudiantes
del curso y que determine cuantos hombre y cuantas mujeres se 
encuentran en el grupo, suponinendo que los datos son extraidos
uno por uno
*/

int main(){

    // Variables
    int numero,varon=0,mujer=0;
    char alumnos[30];

    // Solicitamos la información al usuario
    printf("Escribe el total de alumnos de la clase: ");
    scanf("%d", &numero);
    fflush(stdin);

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 0; i <= numero; i++)
    {
        fflush(stdin);
        printf("\n %i Digite el sexo del alumno: ", i);
        fgets(alumnos,30, stdin);
        strtok(alumnos, "\n");
        fflush(stdin);

        if (strcmp(alumnos, "masculino") == 0){
            varon++;
        }else if (strcmp(alumnos, "femenino") == 0){
            mujer++;
        }
    }
    
    printf("El total de hombres en el curso es: %d\n", varon);
    printf("El total de mujeres en el curso es: %d\n", mujer);

    return 0;
}
