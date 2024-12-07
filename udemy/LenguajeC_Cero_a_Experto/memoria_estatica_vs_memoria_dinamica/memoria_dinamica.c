#include <stdio.h>
#include <stdlib.h>

/*
Memoria dinámica

(tipoDeDato*)malloc(memoriaRequeridaEnBytes);
*/

int main(){
	
	// Variables
	int* myInteger;
	myInteger = (int*)malloc(4); // Reservamos 4 bytes para la variable integer con malloc
	
	if (myInteger != NULL)
	{
		printf("La memoria se ha otorgado\n");
	}else{
		printf("Error al adquirir la memoria\n");
	}

	free(myInteger); // Liberamos la memoria

	return 0;	
}