#include <stdio.h>

/*
Suma pares desde n hasta m
*/

int main(){

    // Variables
    int num1, num2, sumaPares=0, sumaImpares=0;

    // Solicitamos la información al usuario
    printf("Indica rango de suma de pares: ");
    scanf("%d %d", &num1, &num2);

    // Procesamos los datos y los mostramos por pantalla
    while (num1 <= num2)
    {
        if ( num1 % 2 == 0)
        {
            sumaPares += num1;
        }else{
            sumaImpares += num1;
        }
        num1++;
    }
    
    printf("La suma de los pares es: %d\n", sumaPares);
    printf("La suma de los impares es: %d\n", sumaImpares);

    return 0;
}
