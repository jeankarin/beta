#include <stdio.h>

/*
Mostrar todos los múltiplos de 5 desde 1 hasta n
*/

int main(){

    // Variables
    int num, i;

    // Solicitamos la información al usuario
    printf("Indica el limite de numeros para calcular los multiplos de 5: ");
    scanf("%i", &num);

    // Procesamos los datos y los mostramos por pantalla
    i = 1;

    while(i <= num){
        if ( i % 5 == 0 ){
            printf("%i es un multiplo de 5\n", i);
        }
        i++;
    }

    return 0;
}
