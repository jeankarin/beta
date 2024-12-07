#include <stdio.h>

/*
Ejemplo de una estructura

typedef structNombreDeLaEstructura{
    variable_1;
    variable_2;
    variable_N;
}variableContenidoStructura[10]; --> Un array de 10 posiciones.
*/

int main(){

    // Variables
    // Con typedef podemos crear nuestro propio tipo de dato basado en otro.
    // En este ejemplo está basado en int
    typedef int MiTipoDeDato;
    MiTipoDeDato variable1;

    // Pero también podemos seguir usando int.
    int variable2;

    // Solicitamos la información al usuario
    printf("Escribe 2 enteros: ");
    scanf("%d %d", &variable1, &variable2);

    // Procesamos los datos y los mostramos por pantalla
    printf("Los numeros facilitados son %d y %d\n", variable1, variable2);

    return 0;
}
