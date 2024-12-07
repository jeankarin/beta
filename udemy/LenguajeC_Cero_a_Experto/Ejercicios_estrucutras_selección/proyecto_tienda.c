#include <stdio.h>

/*
Simular una tienda con entradas y salidas de capital
*/

int main(){

    // Variables
    int opcion;
    float agregar, retirar, saldo=3000;
    
    // Mostramos información por pantalla
    printf("\t*******************************************\n");
    printf("\t* Este es un Simulador de tienda o cajero *\n");
    printf("\t*******************************************\n\n");
    printf("\tSelecciona una opcion\n");
    printf("\n1 - Depositar Dinero");
    printf("\n2 - Retirar Dinero");
    printf("\n3 - Salir");
    printf("\nOpcion Seleccionada: ");
    scanf("%i", &opcion);

    // Tratamos los datos
    switch(opcion){
        case 1: printf("\nCuanto dinero quieres depositar?\n");
        scanf("%f", &agregar);
        saldo += agregar;
        printf("Tu saldo actual es de %.2f", saldo);
        break;
        case 2: printf("\nCuanto dinero quieres retirar?\n");
        scanf("%f", &retirar);
        if (retirar > saldo){
            printf("Tu saldo disponible solo es de %.2f", saldo);
        }else{
            saldo -= retirar;
            printf("Tu saldo actual es de %.2f", saldo);
        }
        printf("Tu saldo actual es de %.2f", saldo);
        break;
        case 3: printf("\nGracias por usar la aplicacion\n");
        printf("Tu saldo actual es de %.2f", saldo);
        break;
    }

    return 0;
}