#include <stdio.h>
#define Tarifa1 1.2
#define Tarifa2 1.0
#define Tarifa3 0.9

/*
Visualizar la tarifa de la luz segun el gasto de corriente electrica
Para un gasto menor de 1.000Kwxh
la tarifa es de 1.2, entre 1000 y 1850Kwxh es 1.0 y mayor de
1850Kwxh 0.9
*/

int main(){

    // Variables
    float gasto, tarifaLuz;

    // Solicitamos la información al usuario
    printf("Escribe el total del gasto de energia: ");
    scanf("%f", &gasto);

    // Procesamos los datos y los mostramos por pantalla
    if ( gasto < 1000){
        tarifaLuz = Tarifa1;
    }else if (gasto >= 1000 && gasto <= 1850){
        tarifaLuz = Tarifa2;
    }else if (gasto > 1850){
        tarifaLuz = Tarifa3;
    }

    printf("Dado que tu gasto de luz fue de %.2f, la tarifa es de %.2f\n", gasto, tarifaLuz);

    return 0;
}