#include <stdio.h>
#include <math.h>

// Para compilar evitando el error de usar pow
// gcc -o programa_menu programa_menu.c -lm

/*
Hacer un menu que considere las siguientes opciones

1- Cubo de un numero
2- Numero par o impar
3- Salir
*/

int main(){

    // Variables
    int num, opcion, cubo;

    // Solicitamos la información al usuario
    printf("\tMENU\n");
    printf("\t1- Cubo de un numero\n\t2- Numero par o impar\n\t3- Salir\n");
    printf("Opcion: ");
    scanf("%i", &opcion);

    // Procesamos los datos y los mostramos por pantalla
    switch(opcion){
        case 1:
            printf("Seleccionaste el cubo de un numero\n");
            printf("Escribe un numero: ");
            scanf("%d", &num);
            cubo = pow(num, 3);
            printf("El cubo del numero es: %d\n", cubo);
            break;
        case 2:
            printf("Seleccionaste Par o Impar\n");
            printf("Escribe un numero: ");
            scanf("%d", &num);
            if ( num % 2 == 0 ){
                printf("El numero ingresado es par\n");
            }else{
                printf("El numero ingresado es impar\n");
            }
            break;
        case 3:
            printf("Gracias por usar la aplicacion\n");
            break;
        default:
            printf("Opcion no valida\n");
    }

    return 0;
}