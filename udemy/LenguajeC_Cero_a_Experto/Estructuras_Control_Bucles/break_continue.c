#include <stdio.h>

/*
break → no solo termina con la iteración, sino con el ciclo completo del programa, cierra la aplicación.
continue → Sirve para terminar con la iteración y pasar a la siguiente. No sale del programa.
*/

int main(){

    // Variables
    int multiplo;

    // Solicitamos la información al usuario
    printf("Escribe el numero que sera ignorado\n");
    scanf("%i", &multiplo);

    // Con continue nos saltamos el printf y no mostramos el numero facilitado por pantalla
    for (int i = 0; i < 10; i++){
        if ( i == multiplo){
            continue;
        }else{
            printf("\nSoy el continue %i", i);
        }
    }

    // Con brake indicamos que cuando el bucle llegue al numero introducido se cierre la aplicación
    for (int i = 0; i < 10; i++){
        if ( i == multiplo){
            break;
        }else{
            printf("\nSoy el break %i", i);
        }
    }

    return 0;
}