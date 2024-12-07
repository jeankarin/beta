#include <stdio.h>

/*
Determinar suma de todos los numeros hasta el numero facilitado por el usuario
*/

int main(){

    // Variables
    int contador, num, suma;

    // Solicitamos la información al usuario
    printf("Escribe hasta que numero quieres que se haga la suma\n");
    scanf("%i", &num);

    // Procesamos los datos y los mostramos por pantalla
    contador = 1;

    while (contador <= num)
    {
        suma +=contador;
        contador++;
    }
    
    printf("La suma hasta el numero %i es de %i\n", num, suma);

    return 0;
}
