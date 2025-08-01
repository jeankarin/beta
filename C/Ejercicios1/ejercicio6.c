#include <stdio.h>

/* Dada la función f(x), realizar un programa C que calcule dicha función para un valor
dado de x y lo muestre por pantalla.
x + 3 para x ≤ 0
f(x)
x2 + 2x para x > 0
*/

int main(){

	// Variables
	float x, y;

	// Solicitamos el valor de x al usuario
	printf("Ingrese un valor para x: ");
	scanf("%f", &x);

	// Calculamos f(x) según las reglas
	if (x <= 0){
		y = x + 3;
	} else {
		y = x * x + 2 * x;
	}

	// Mostrar el resultado
	printf("El valor de f(x) para x = %.2f es: %.2f\n", x, y);

	return 0;

	/* Resuelto gracias a ChatGPT porque no lo he entendido el enunciado */
}