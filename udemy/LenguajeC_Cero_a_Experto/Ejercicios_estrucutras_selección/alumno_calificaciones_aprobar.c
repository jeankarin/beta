#include <stdio.h>

/*
Comprobar a través de un programa si un alumno aprobo o no.
Aprueba si su nota es mayor a 5.5
*/

int main(){

    // Variables
    float califExamen;

    // Solicitamos los datos
    printf("Escribe la nota de tu examen: ");
    scanf("%f", &califExamen);

    // Procesamos los datos
    if ( califExamen >= 5.5){
        printf("Felicidades has aprobado\n");
    }else{
        printf("Has suspendido, esfuerzate mas la proxima vez\n");
    }
    
    return 0;
}