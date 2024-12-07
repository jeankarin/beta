#include <stdio.h>

/*
Transformar años a meses
meses a semanas
semanas a dias
dias a horas

1 año = 12 meses
1 mes = 4 semanas
1 semana = 7 dias
1 dia = 24 horas
*/

// Pedir al usuario que digite la cantidad de años con las que se hará la conversión.

int main(){

    // Declaramos las variables
    int edad, meses, semanas, dias, horas;

    // Solicitamos los datos al usuario
    printf("Digita tu edad\n");
    scanf("%i", &edad);

    meses = edad * 12;
    semanas = meses * 4;
    dias = semanas * 7;
    horas = dias * 24;

    printf("Tu edad en meses es de %i\n", meses);
    printf("Tu edad en semanas es de %i\n", semanas);
    printf("Tu edad en dias es de %i\n", dias);
    printf("Tu edad en horas es de %i\n", horas);

    return 0;
}
