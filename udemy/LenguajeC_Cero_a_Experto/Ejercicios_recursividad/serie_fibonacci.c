#include <stdio.h>

/*
Serie Fibonacci con recursividad
*/

int fibonacci(int num){
    if (num == 1 || num == 2){
        return 1;
    }else{
        return fibonacci(num - 1) + fibonacci(num -2);
    }
}

int main(){

    // Variables
    int num;

    // Solicitamos la información al usuario
    printf("Introduce un numero: ");
    scanf("%d", &num);

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 1; i <= num; i++){
        printf("%d ", fibonacci(i));
    }

    return 0;
}
