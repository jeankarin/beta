#include <stdio.h>

/*
Sentencia switch()

switch(selecciona){
    case 1: opcion 1; break;
    case 2: opcion 2; break;
    case 3: opcion 3; break;
    case 4: opcion 4; break;
    case 5: opcion 5; break;
    default: ninguna de las anteriores; break;
}
*/

int main(){

    // Variables
    int dia;

    // Solicitamos los datos al usuario
    puts("Selecciona un numero de los dias de la semana (1 al 7)\n");
    scanf("%i", &dia);

    //Declaramos sentencia switch
    switch (dia)
    {
    case 1: printf("Seleccionaste el Lunes\n");
        break;
    case 2: printf("Seleccionaste el Martes\n");
        break;
    case 3: printf("Seleccionaste el Miercoles\n");
        break;
    case 4: printf("Seleccionaste el Jueves\n");
        break;
    case 5: printf("Seleccionaste el Viernes\n");
        break;
    case 6: printf("Seleccionaste el Sabado\n");
        break;
    case 7: printf("Seleccionaste el Domingo\n");
        break;
    default: puts("ninguna de las anteriores\n");
        break;
    }

    return 0;
}