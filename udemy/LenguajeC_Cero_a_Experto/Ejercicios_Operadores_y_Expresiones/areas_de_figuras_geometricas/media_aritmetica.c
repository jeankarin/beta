#include <stdio.h>

/* Calcule la media aritmetica de 3 numeros
cualesquiera dados por el usuario */

int main(){
	
	// Variables
	int num1, num2, num3;
	float media_aritmetica;
	
	// Solicitamos la informacion al usuario
	printf("Escribe 3 numeros\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	// Realizamos los calculos
	media_aritmetica = (num1 + num2 + num3) / 3;
	
	// Mostramos la informacion por pantalla
	printf("La media artimetica es: %.2f", media_aritmetica);
	
	return 0;
}