#include <stdio.h>

/*
Dada una nota de un examen escribir el literal de la nota correspendiente
A - Excelente
B - Notable
C - Aprobado
D y F - Suspendido
*/

int main(){

    // Variables
    char nota;

    // Solicitamos los datos al usuario
    printf("Escribe tu nota (A-F): ");
    scanf("%c", &nota);

    // Procesamos la información y mostramos por pantalla
    switch(nota)
    {
        case 'A': printf("Excelente\n");
        break;
        case 'B': printf("Notable\n");
        break;
        case 'C': printf("Aprobado\n");
        break;
        case 'D':
        case 'F': printf("Suspendido\n");
        break;
        default: printf("Nota no valida");
        break;
    }

    return 0;
}