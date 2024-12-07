#include <stdio.h>

/* Calcula la cantidad de segundos que estan incluidos en el numero de horas,
minutos y segundos ingresados por el usuario */

int main(){
	
	// Variables
	int horas, minutos, segundos, tiempoHoras, tiempoMinutos, tiempoSegundos, total;
	
	// Solicitamos  los datos al usuario
	printf("Escribe el numero de horas\n");
	scanf("%d", &horas);
	
	printf("Escribe el numero de minutos\n");
	scanf("%d", &minutos);
	
	printf("Escribe el numero de segundos\n");
	scanf("%d", &segundos);
	
	// Convertimos horas a minutos, minutos a segundos y sumar los segundos
	tiempoHoras = horas * 3600;
	tiempoMinutos = minutos * 60;
	tiempoSegundos = segundos;
	
	total = tiempoHoras + tiempoMinutos + tiempoSegundos;
	
	// Mostramos la información
	printf("El equivalente en segundos es: %d", total);
	
	return 0;
}
	