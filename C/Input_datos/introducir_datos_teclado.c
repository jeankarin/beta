#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num; //Creamos una variable tipo entero

	//Mostramos la frase por pantalla
	printf("Introduzca un numero: ");

	//Aquí se guarda el numero introducido en la variable num
	scanf ("%i", &num);

	//Mostramos por pantalla el número introducido
	printf("Numero tecleado por el usuario: %i \n", num);
	//system("PAUSE"); Esto no existe en Linux
}
