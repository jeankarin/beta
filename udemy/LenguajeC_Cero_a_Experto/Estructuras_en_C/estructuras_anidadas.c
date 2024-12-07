#include <stdio.h>

/*
Estructuras anidadas, son estructuras dentro de estructuras
*/

struct infoDireccion
{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado
{
    char nombre[30];
    struct infoDireccion dirEmpleado;
    double salario;
}empleados[2]; // Creamos un array de empleados con 2 posiciones.



int main(){

    // Solicitamos la información al usuario
    for (int i = 0; i < 2; i++)
    {
        printf("%i- Escribe su nombre: ", i + 1);
        fgets(empleados[i].nombre,30,stdin);
        printf("%i- Escribe su Direccion: ", i + 1);
        fgets(empleados[i].dirEmpleado.direccion,30,stdin);
        printf("%i- Escribe el nombre de su ciudad: ", i + 1);
        fgets(empleados[i].dirEmpleado.ciudad,20,stdin);
        printf("%i- Escribe su provincia: ", i + 1);
        fgets(empleados[i].dirEmpleado.provincia,20,stdin);
        printf("%i- Escribe su salario: ", i + 1);
        scanf("%lf", &empleados[i].salario);
        printf("\n");
    }
    
    // Procesamos los datos y los mostramos por pantalla
    for (int i = 0; i < 2; i++)
    {
        printf("\n\nDatos del empleado numero %i: \n", i + 1);
        printf("\tNombre: %s\n", empleados[i].nombre);
        printf("\tDireccion: %s\n", empleados[i].dirEmpleado.direccion);
        printf("\tCiudad: %s\n", empleados[i].dirEmpleado.ciudad);
        printf("\tProvincia: %s\n", empleados[i].dirEmpleado.provincia);
        printf("\tSalario: %.2f\n", empleados[i].salario);
    }
    
    return 0;
}
