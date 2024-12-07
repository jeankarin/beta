#include <stdio.h>

/*
Hacer un programa que simule un cajero automático con
un saldo de 1000 Euros €
*/

int main(){

    // Variables
    float saldo = 1000, cantidad;
    int opcionElegida;

    // Solicitamos los datos
    printf("Bienvenidoa tu cajero virtual\n");
    printf("1- Agregar dinero\n");
    printf("2- Retirar dinero\n");
    printf("3- Ver saldo\n");
    printf("4- Salir\n");
    scanf("%d", &opcionElegida);

    // Mostramos y procesamos los datos
    switch(opcionElegida){
        case 1:
            printf("Selecciono agregar dinero a la cuenta\n");
            printf("Escriba la cantidad a ingresar: ");
            scanf("%f", &cantidad);
            saldo += cantidad;
            printf("El saldo actual es: %.2f", saldo);
            break;
        case 2:
            printf("Selecciono retirar dinero de la cuenta\n");
            printf("Escriba la cantidad a retirar: ");
            scanf("%f", &cantidad);
            saldo -= cantidad;
            printf("El saldo actual es: %.2f\n", saldo);
            break;
        case 3:
            printf("El saldo actual es: %.2f\n", saldo);
            break;
        case 4:
            printf("Gracias por usar el cajero\n");
            break;
        default:
            printf("Opcion no disponible\n");
            break;
    }

    return 0;
}