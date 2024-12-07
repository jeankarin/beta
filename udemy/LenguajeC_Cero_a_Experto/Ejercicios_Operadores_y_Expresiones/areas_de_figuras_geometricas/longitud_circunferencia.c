#include <stdio.h>
#define PI 3.1416

/* Hacer un programa que calcule
longitudes de circunferencia */

int main(){
	
	// Variables
	float radio, longitud;
	
	// Solicitamos los datos al usuario
	printf("Escribe el valor del radio de la circunferencia\n");
	scanf("%f", &radio);
	
	// Realizamos las operaciones
	longitud = 2 * PI * radio;
	
	// Mostramos la información por pantalla
	printf("La longitud de la circunferencia es: %.2f", longitud);
	
	return 0;
}