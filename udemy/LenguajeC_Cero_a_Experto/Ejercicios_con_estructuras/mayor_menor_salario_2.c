#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

/*
Realizar un programa que lea un arreglo de estructuras
Los datos de N empleados de la empresa y que imprima los
datos del empleado con mayor y menor salario
*/

struct empleado
{
    char nombre[20], sexo[20];
    int edad;
    float salario;
}empleados[100];


int main(){

    // Variables
    int cantidadEmpleados = 0, posMayor = 0, posMenor = 0;
    float salarioMayor = 0.0, salarioMenor = 9999999.9;

    // Solicitamos la información al usuario
    printf("Cuantos empleados tiene la empresa: ");
    scanf("%d", &cantidadEmpleados);

    for (int i = 0; i < cantidadEmpleados; i++)
    {
        __fpurge(stdin);
        printf("Nombre empleado %d: ", i + 1);
        fgets(empleados[i].nombre,20,stdin);
        strtok(empleados[i].nombre,"\n");
        
        printf("Sexo del empleado %d: ", i + 1);
        fgets(empleados[i].sexo,20,stdin);
        strtok(empleados[i].sexo,"\n");

        __fpurge(stdin);
        printf("Edad del empleado %d: ", i + 1);
        scanf("%d", &empleados[i].edad);

        printf("Salario del empleado %d: ", i + 1);
        scanf("%f", &empleados[i].salario);
    }

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 0; i < cantidadEmpleados; i++)
    {
        if (empleados[i].salario > salarioMayor)
        {
            salarioMayor = empleados[i].salario;
            posMayor = i;
        }
        if (empleados[i].salario < salarioMenor)
        {
            salarioMenor = empleados[i].salario;
            posMenor = i;
        }
    }
    
    printf("El empleado %s tiene el salario menor %.2f\n", empleados[posMenor].nombre, empleados[posMenor].salario);
    printf("El empleado %s tiene el salario mayor %.2f\n", empleados[posMayor].nombre, empleados[posMayor].salario);

    return 0;
}
