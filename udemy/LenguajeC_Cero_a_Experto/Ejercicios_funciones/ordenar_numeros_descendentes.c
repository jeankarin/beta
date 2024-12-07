#include <stdio.h>

/*
Ordenar 3 numeros de manera descendente
*/

void ordenDescendente(int a, int b, int c){
    if (a >= b && a >= c){
        if (b >= c){
            printf("%d %d %d\n", a, b, c);
        }else{
            printf("%d %d %d\n", a, c, b);
        }
    }

    if (b >= a && b >= c){
        if (a >= c){
            printf("%d %d %d\n", b, a, c);
        }else{
            printf("%d %d %d\n", b, c, a);
        }
    }

    if (c >= a && c >= b){
        if (a >= b){
            printf("%d %d %d\n", c, a, b);
        }else{
            printf("%d %d %d\n", c, b, a);
        }
    }
}

int main(){

    // Variables
    int a, b, c;

    // Solicitamos la información al usuario
    printf("Escribe 3 numeros para ordenar de manera descendente: ");
    scanf("%d %d %d", &a, &b, &c);

    // Procesamos los datos y los mostramos por pantalla
    ordenDescendente(a, b, c);

    return 0;
}
