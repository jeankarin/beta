#include <stdio.h>
#include <stdlib.h>

/*
Hacer un programa que con memoria dinamica y usando tres funciones
pueda crear un arreglo dinamico dado por el usuario.
1- Obtener la cantidad de datos para regresarlos en una función
2- Leer los datos y llenar el arreglo dinamico por el usuario
3- Imprimir los datos por el usuario
*/

int obtenerCantidad(){
    
    int cantidad;
    printf("Cuantos numeros va a ingresar: ");
    scanf("%d", &cantidad);

    return cantidad;
}

void rellenarDatos(int tam, int *arraydin){

    for (int i = 0; i < tam; i++)
    {
        printf("Ingresa el elemento de [%d]\n", i);
        scanf("%d", &arraydin[i]);
    }
}

void imprimir(int tam, int *arraydin){

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", *(arraydin + i));
    }
}

int main(){

    // Variables
    int tamanyo = obtenerCantidad();
    int *arraydin = (int *)calloc(1, sizeof(int) * tamanyo);

    // Rellenar datos
    rellenarDatos(tamanyo,arraydin);

    // Imprimimos por pantalla
    imprimir(tamanyo,arraydin);

    // Liberamos la memoria
    free(arraydin);

    return 0;
}