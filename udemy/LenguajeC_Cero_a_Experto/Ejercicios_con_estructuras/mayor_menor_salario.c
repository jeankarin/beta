#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

/*
Realizar un programa en C que lea un arreglo de estrucutras.
Los datos de N empleados de la empresa y que imprima los datos del empleado con mayor y menor salario
*/

struct empleado
{
    char nombre[20], sexo[20];
    float salario;
}empleados[100];


int main(){

    // Variables
    int numeroEmpleados, pmayorSalario = 0, pmenorSalario = 0;
    float mayorSalario = 0.0, menorSalario = 9999999999.9;

    // Solicitamos la información al usuario
    printf("Ingrese el numero de empleados: ");
    scanf("%d", &numeroEmpleados);

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 0; i < numeroEmpleados; i++)
    {
        __fpurge(stdin);
        printf("\nIngrese el nombre del empleado: ");
        fgets(empleados[i].nombre,20,stdin);
        strtok(empleados[i].nombre,"\n");

        printf("\nIngrese el sexo del empleado: ");
        fgets(empleados[i].sexo,20,stdin);
        strtok(empleados[i].sexo,"\n");

        printf("\nIngrese el salario del empleado: ");
        scanf("%f", &empleados[i].salario);
        printf("\n");
    }
    
    // Calcular el salario mayor y menor
    for (int i = 0; i < numeroEmpleados; i++)
    {
        if (empleados[i].salario > mayorSalario)
        {
            mayorSalario = empleados[i].salario;
            pmayorSalario = i;
        }
        
        if (empleados[i].salario < menorSalario)
        {
            menorSalario = empleados[i].salario;
            pmenorSalario = i;
        }
    }
    
    printf("El empleado con mayor salario es %s, con un salario de %.2f.\n", empleados[pmayorSalario].nombre, empleados[pmayorSalario].salario);
    printf("El empleado con menor salario es %s, con un salario de %.2f.\n", empleados[pmenorSalario].nombre, empleados[pmenorSalario].salario);

    return 0;
}
