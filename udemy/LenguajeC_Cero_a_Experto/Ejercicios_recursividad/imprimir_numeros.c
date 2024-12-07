#include <stdio.h>

/*
Consideremos una funcion que recibe un numero
n e imprime los numeros del n al 1. Con recursividad
*/

int impNum(int n){
    if (n == 0 || n == 1){
        return 1;
    }else{
        return impNum(n - 1) + 1; //Llamamos a la función con n-1, pero imprimimos con el return (n-1)+1
    }
}

int main(){

    // Variables
    int num;

    // Solicitamos la información al usuario
    printf("Ingrese un numero: ");
    scanf("%i", &num);

    // Procesamos los datos y los mostramos por pantalla
    for (int i = num; i > 0; i--)
    {
        printf("%d\n", impNum(i));
    }
    

    return 0;
}
