#include <stdio.h>

int main(){

    // Declaramos las variables
    float precio,descuento,compraDescuento;

    // Solicitamos el precio al usuario
    printf("Dame el precio del producto\n");
    scanf("%f", &precio);

    // Aplicamos el descuento del 15%
    descuento = precio * 0.15;

    // Aplicamos el descuento
    compraDescuento = precio - descuento;

    // Mostramos el descuento en pantalla
    printf("El precio del producto con el descuento es de %.2f\nEl total descontado es %.2f", compraDescuento, descuento);

}
