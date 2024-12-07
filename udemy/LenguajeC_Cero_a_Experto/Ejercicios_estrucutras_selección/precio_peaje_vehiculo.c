#include <stdio.h>

/*
Seleccionar un tipo de vehiculo e indicar el peaje a pagar
turismo -- €500
autobus -- €3000
motocicleta -- €300
caso contrario -- Vehiculo no autorizado
*/

int main(){

    // Variables
    int opcion;

    // Solicitamos la información al usuario
    printf("Selecciona el tipo de vehiculo\n");
    printf("1- Turismo\n");
    printf("2- Autobus\n");
    printf("3- Motocicleta\n");
    scanf("%d", &opcion);

    // Procesamos los datos y los mostramos por pantalla
    switch(opcion){
        case 1:
            printf("Debe pagar un peaje de €500\n");
            break;
        case 2:
            printf("Debe pagar un peaje de €3000\n");
            break;
        case 3:
            printf("Debe pagar un peaje de €300\n");
            break;
        default:
            printf("Vehiculo no autorizado\n");
            break;
    }

    return 0;
}