#include <stdio.h>

// Dadas las horas trabajadas de una persona y el valor por hora
// Calcular el salario e imprimirlo.

int main(){
	
	// Declaramos las variables
	int horas, salario_hora, salariototal;
	
	printf("Introduce las horas trabajadas\n");
	scanf("%d", &horas);
	
	printf("Introduce el salario por horas\n");
	scanf("%d", &salario_hora);
	
	salariototal = horas * salario_hora;
	
	printf("El salario total es: %d", salariototal);
	return 0;
}