#include <stdio.h>

/*
Determinar si un numero es Primo
*/

int main(){

    // Variables
    int num, cont=0, i;

    // Solicitamos la información al usuario
    printf("Escribe un numero para saber si es primo o no: ");
    scanf("%i", &num);

    // Procesamos los datos y los mostramos por pantalla
    for (i = 1; i <= num; i++){
        if (num % i == 0){
            cont++;
        }
    }

    if (cont > 2){
        printf("El numero %i no es primo\n", num);
    }else{
        printf("El numero %i es primo\n", num);
    }

    return 0;
}
