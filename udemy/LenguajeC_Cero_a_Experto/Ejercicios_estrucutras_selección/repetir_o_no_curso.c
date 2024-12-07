#include <stdio.h>

/*
Ver si un alumno va a pasar de año o no.
Un alumno solo tiene derecho a suspender 3 materias para poder
pasar de año. Si suspende 4 no puede pasar y repite.
*/

int main(){

    // Variables
    int materiasR;

    // Solicitamos los datos al usuario
    printf("Cuantas materias has suspendido?\n");
    scanf("%i", &materiasR);

    // Realizamos las operaciones
    if (materiasR > 3)
    {
        printf("Estas suspendido, tienes que repetir curso\n");
    }
    else
    {
        printf("Felicidades pasas de curso");
    }
    
    return 0;
}