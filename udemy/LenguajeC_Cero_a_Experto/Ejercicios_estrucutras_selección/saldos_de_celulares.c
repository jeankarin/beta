#include <stdio.h>

/*
Calcular tarifas de saldo en celulares y poner precios
De 1000 a 1500 Premium
De 500 a 999 Intermedia
De 100 a 499 Basica
*/

#define Tarifa3 "Premium"
#define Tarifa2 "Intermedia"
#define Tarifa1 "Basica"

int main(){
    
    // Variables
    float precio;

    // Solicitamos los datos al usuario
    printf("Cuanto estas dispuesto a pagar por tu plan?\n");
    scanf("%f", &precio);

    // Realizamos las operaciones
    if ( precio < 500 && precio > 99){
        printf("El plan que se ajusta al precio que estas dispuesto a pagar es: %s\n", Tarifa1);
    }
    if ( precio >= 500 && precio < 1000){
        printf("El plan que se ajusta al precio que estas dispuesto a pagar es: %s\n", Tarifa2);
    }
    if ( precio >= 1000 && precio <= 1500){
        printf("El plan que se ajusta al precio que estas dispuesto a pagar es: %s\n", Tarifa3);
    }
    if ( precio <= 99 ){
        printf("No tenemos ninguna tarifa que se ajuste a sus necesidades\n");
    }
}