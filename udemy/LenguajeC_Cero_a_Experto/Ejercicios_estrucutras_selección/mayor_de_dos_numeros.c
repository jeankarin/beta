#include <stdio.h>

/*
Calcular el mayor de 2 numeros facilitados por el usuario
*/

int main(){

    // Variables
    int num1, num2;

    // Solicitamos la información al usuario
    printf("Escribe 2 numeros y facilitaremos el mayor\n");
    scanf("%d %d", &num1, &num2);

    // Procesamos los datos y los mostramos por pantalla
    if ( num1 > num2 ){
        printf("El numero mayor es %d", num1);
    }else{
        printf("El numero mayor es %d", num2);
    }

    return 0;
}