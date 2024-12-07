#include <stdio.h>

/*
Sumar un numero y restar el siguiente 1-2+3-4+5-6
Impares Positivos
Pares Negativos
*/

int main(){

    // Variables
    int sumaPares, sumaImpares, numeros, i, neg, sumaGeneral;

    // Solicitamos la información al usuario
    printf("Hasta que numero quieres sumar: ");
    scanf("%i", &numeros);

    // Procesamos los datos y los mostramos por pantalla
    i = 1;

    while (i <= numeros){
        if (i % 2 == 0){
            neg = i * (-1);
            sumaPares += neg;
        }else{
            sumaImpares += i;
        }
        i++;
    }

    sumaGeneral = sumaPares + sumaImpares;
    printf("El resultado de la suma es de %i\n", sumaGeneral);

    return 0;
}
