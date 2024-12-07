#include <stdio.h>

/*
Sumar 1-2+3-4 ...
Impares (+)
Pares (-)

suma_pares = -2 -4 -6 -8 ...
suma_impares = 1 + 3 + 5 ...
*/

int main(){

    // Variables
    int i=1, sumaFinal=0, sumaPares=0, sumaImpares=0, numero, numParNegativo;

    // Solicitamos la información al usuario
    printf("Escribe el total de numeros de la siere: ");
    scanf("%d", &numero);

    // Procesamos los datos y los mostramos por pantalla
    while ( i <= numero)
    {
        if (i % 2 == 0)
        {
            numParNegativo = i * -1;
            sumaPares += numParNegativo;
        }
        else
        {
            sumaImpares += i;
        }
        i++;
    }

    sumaFinal = sumaPares + sumaImpares;
    printf("La suma de los numeros pares es: %d\n", sumaPares);
    printf("La suma de los numeros impares es: %d\n", sumaImpares);
    printf("La suma total es: %d\n", sumaFinal);

    return 0;
}
