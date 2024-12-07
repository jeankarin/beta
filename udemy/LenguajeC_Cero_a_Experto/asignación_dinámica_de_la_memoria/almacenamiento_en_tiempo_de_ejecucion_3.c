/*
Diseña un tipo abstracto de dato llamado Automovil en el cual puedes encapsular elementos como:
marca, modelo, color, tipo de auto.

Elaborar un programa en el cual se incluya la definición de tu tipo abstracto de dato y utilizando
memoria dinamica crea un arreglo dinamico de automoviles en el cual se solicite al usuario en tiempo
de ejecución, el tamaño de dicho arreglo.

Dentro de la función principal del programa, el usuario debera indicar y llenar el número de
automoviles determinando el tamaño del arreglo.

Recuerda que es recomendable el uso de funciones para trabajar con implementaciones de tipo
abstracto de datos.
*/

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

typedef struct automovil{
    char marca[30], modelo[30], color[30], tipodeAuto[30];
}automovil;

void llenarDatosAutomoviles(automovil *carrosCreados, int cantidadAutos){

    // Variables
    char Marca[30], Modelo[30], Color[30], TipoDeAuto[30];
    
    // Solicitamos los datos al usuario
    for (int i = 0; i < cantidadAutos; i++)
    {
        __fpurge(stdin);
        printf("Marca del auto[%d]: ", i +1);
        fgets(carrosCreados[i].marca,30,stdin);
        strtok(carrosCreados[i].marca,"\n");
        __fpurge(stdin);
        printf("Modelo del auto[%d]: ", i +1);
        fgets(carrosCreados[i].modelo,30,stdin);
        strtok(carrosCreados[i].modelo,"\n");
        __fpurge(stdin);
        printf("Color del auto[%d]: ", i +1);
        fgets(carrosCreados[i].color,30,stdin);
        strtok(carrosCreados[i].color,"\n");
        __fpurge(stdin);
        printf("Tipo de auto[%d]: ", i +1);
        fgets(carrosCreados[i].tipodeAuto,30,stdin);
        strtok(carrosCreados[i].tipodeAuto,"\n");
        printf("\n\n");
    }
}

void imprimirAutos(automovil *carrosCreados, int cantidadAutos){

    // Mostramos los datos por pantalla
    for (int i = 0; i < cantidadAutos; i++)
    {
        printf("Marca del auto[%d]: %s\n", i +1, carrosCreados[i].marca);
        printf("Modelo del auto[%d]: %s\n", i +1, carrosCreados[i].modelo);
        printf("Color del auto[%d]: %s\n", i +1, carrosCreados[i].color);
        printf("Tipo de auto[%d]: %s\n", i +1, carrosCreados[i].tipodeAuto);
        printf("\n\n");
    }
}

int main(){

    // Variables
    int cantidadAutos;
    
    // Solicitamos la información al usuario
    printf("Cuantos autos quieres crear?: ");
    scanf("%d", &cantidadAutos);

    // Reservamos la memoria para los automoviles
    automovil *carrosCreados = (automovil *)calloc(cantidadAutos,sizeof(automovil));

    // Llamos a las funciones para procesar los datos
    llenarDatosAutomoviles(carrosCreados, cantidadAutos);
    imprimirAutos(carrosCreados, cantidadAutos);
    
    // Liberamos la memoria
    free(carrosCreados);

    return 0;
}
