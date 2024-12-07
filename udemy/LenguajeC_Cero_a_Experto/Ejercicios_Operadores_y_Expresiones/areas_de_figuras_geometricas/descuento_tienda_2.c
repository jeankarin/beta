#include <stdio.h>

/* Una tienda ofrece un descuento del 15% sobre el total de la compra y
un cliente desea saber cuanto debera pagar finalmente por su compra. */

int main(){
	
	// Variables
	float precioInicial, descuento, precioFinal;
	
	// Solicitamos los datos al usuario
	printf("Escribe el precio del producto\n");
	scanf("%f", &precioInicial);
	
	// Realizamos la operacion
	descuento = precioInicial * 0.15;
	precioFinal = precioInicial - descuento;
	
	// Mostramos la informacion por pantalla
	printf("El precio final es %.2f y se descontaron %.2f", precioFinal, descuento);
	
	return 0;
}