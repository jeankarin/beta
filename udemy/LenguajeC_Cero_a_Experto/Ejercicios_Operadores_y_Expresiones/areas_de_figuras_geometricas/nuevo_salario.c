#include <stdio.h>

/* Calcular el nuevo salario de un obrero
si obtuvo un incremento del 25% sobre un salario anterior */

int main(){
	
	// Variables
	float salarioInicial, aumento, salarioFinal;
	
	// Solicitamos los datos al usuario
	printf("Escribe el salario inicial\n");
	scanf("%f", &salarioInicial);
	
	// Realizamos las operaciones
	aumento = salarioInicial * 0.25;
	salarioFinal = salarioInicial + aumento;
	
	// Mostramos la informacion por pantalla
	printf("Su nuevo salario es %.2f, se aumento %.2f", salarioFinal, aumento);
	
	return 0;
}