#include <stdio.h>

/*
Decirle al alumno algo con base a sus calificaciones
9-10 --> Excelente, sigue así
8-9 --> Muy bien, puedes mejorar
7-9 --> Eres un estudiante regular
0-6.9 --> Puedes mejorar
*/

int main(){

    // Variables
    int calificacion;

    // Solicitamos los datos
    printf("Digita tu calificacion\n");
    scanf("%i", &calificacion);

    // Procesamos los datos
    switch(calificacion){
        case 1: printf("Muy mal, sacaste %i\n", calificacion); break;
        case 2: printf("Muy mal, sacaste %i\n", calificacion); break;
        case 3: printf("Muy mal, sacaste %i\n", calificacion); break;
        case 4: printf("Muy mal, sacaste %i\n", calificacion); break;
        case 5: printf("Muy mal, sacaste %i\n", calificacion); break;
        case 6: printf("Muy bien, sacaste un %i\n", calificacion); break;
        case 7: printf("Muy bien, sacaste un %i, felicidades\n", calificacion); break;
        case 8: printf("Muy bien, sacaste un %i eres un buen alumno\n", calificacion); break;
        case 9: printf("Muy bien, sacaste un %i, casi perfecto\n", calificacion); break;
        case 10: printf("Muy bien, sacaste un %i, eres el mejor\n", calificacion); break;
        default: printf("No es una opcion valida\n"); break;
    }

    // Mostramos los datos por pantalla

    return 0;
}