#include <stdio.h>

// Convertir grados celsius a fahrenheit

int main(){
	
	// Variables
	float gradosCelsius, gradosFahrenheit;
	
	// Solicitamos los datos al usuario
	printf("Escribe la cantidad de grados Celsius:\n");
	scanf("%f", &gradosCelsius);
	
	// Realizamos la conversión
	gradosFahrenheit = (gradosCelsius * 1.8) + 32;
	
	// Mostramos la información
	printf("El  equivalente en Grados Fahrenheit es: %.2f\n", gradosFahrenheit);
	
	return 0;
}