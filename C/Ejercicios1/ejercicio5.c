#include <stdio.h>

/*
Escriba un programa en C que muestre por pantalla el valor de una entrada de cine en
función de los años de la persona. Así, el precio es de 7 Euros, pero si el usuario tiene
menos de 5 años se aplica un 60% de descuento, y si es mayor de 60 años, se aplicará
un descuento del 55 %. El precio de la entrada se debe declarar como una constante.

(Candidad × 60) ÷ 100 = Descuento
Para obtener el precio final, después de sacar el descuento, use esta fórmula:
Candidad - Descuento = Precio Final.

*/

int main(){

    // Variables
    int entrada = 7, edad; 
    float precio_final;

    // Solicitamos la edad del comprador
    printf("Cuántos años tienes?: ");
    scanf("%d", &edad);

    // Mostramos percio según edad
    if (edad < 5){
        precio_final = entrada - ((entrada * 60)/100);
        printf("El precio de la entrada es: %3.2f\n", precio_final);
    } else if (edad > 60) {
        precio_final = entrada - ((entrada * 55)/100);
        printf("El precio de la entrada es: %3.2f\n", precio_final);
    } else {
        printf("El precio de la entrada es: %d\n", entrada);
    }

    // Test BORRAR
    // printf("Años que tiene: %d\n", edad);

    return 0;
}