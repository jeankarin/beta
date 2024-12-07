#include <stdio.h>

// Calcular el area de un trapecio

int main() {
	
	// Variables
	float base_mayor, base_menor, altura, area;
	
	// Solicitamos los datos al usuario
	printf("Escribe la base mayor\n");
	scanf("%f", &base_mayor);
	
	printf("Escribe la base menor\n");
	scanf("%f", &base_menor);
	
	printf("Escribe la altura\n");
	scanf("%f", &altura);
	
	// calculamos el area
	area = ((base_mayor + base_menor) * altura) / 2;
	
	// Mostramos por pantalla
	printf("El area es: %.2f", area);
	return 0;
}