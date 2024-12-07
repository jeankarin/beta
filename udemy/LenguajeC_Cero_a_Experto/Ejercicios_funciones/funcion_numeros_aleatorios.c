#include <stdio.h>
#include <time.h>

/*
numero = rand () % 11; --> Esto nos da un número entre 0 y 10.
numero = rand () % 11 + 20; --> Esto nos da un número entre 20 y 30.

Función srand()
srand(time(NULL));
variable = limite_inferior + rand() % ((limite_superior + 1) - limite_inferior);

*/

void funcion_aleatoria(){
    int numero, i, limite_inferior, limite_superior;

    srand(time(NULL)); // coge el reloj del sistema para generar una semilla, para generar un número aleatorio y así no se repite.
    
    printf("Digite el limite inferior: ");
    scanf("%i", &limite_inferior);

    printf("Digite el limite superior: ");
    scanf("%i", &limite_superior);

    for (i = 1; i <= 10; i++)
    {
        numero = limite_inferior + rand() % ((limite_superior + 1) - limite_inferior);
        printf("%i.\n", numero);
    }
}

int main(){

    // Procesamos los datos y los mostramos por pantalla
    funcion_aleatoria();

    return 0;
}
