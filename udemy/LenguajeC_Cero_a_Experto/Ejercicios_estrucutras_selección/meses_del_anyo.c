#include <stdio.h>

/*
Mostrar los meses del anyo, pidiendo al usuario un numero
entre 1-12 y mostrar el mes al que corresponde.
*/

int main(){

    // Variables
    int num;

    // Solicitamos la información al usuario
    printf("Indica el numero para saber el mes: ");
    scanf("%d", &num);

    // Procesamos los datos y los mostramos por pantalla
    switch(num){
        case 1:
            printf("El mes elegido es Enero\n");
            break;
        case 2:
            printf("El mes elegido es Febrero\n");
            break;
        case 3:
            printf("El mes elegido es Marzo\n");
            break;
        case 4:
            printf("El mes elegido es Abril\n");
            break;
        case 5:
            printf("El mes elegido es Mayo\n");
            break;
        case 6:
            printf("El mes elegido es Junio\n");
            break;
        case 7:
            printf("El mes elegido es Julio\n");
            break;
        case 8:
            printf("El mes elegido es Agosto\n");
            break;
        case 9:
            printf("El mes elegido es Septiembre\n");
            break;
        case 10:
            printf("El mes elegido es Octubre\n");
            break;
        case 11:
            printf("El mes elegido es Noviembre\n");
            break;
        case 12:
            printf("El mes elegido es Diciembre\n");
            break;
        default:
            printf("Mes incorrecto\n");
            break;
    }

    return 0;
}