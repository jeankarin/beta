#include <stdio.h>

/*
Ordenar los numeros en orden ascendente
Solicitamos al usuario que ordene 3 numeros de manera ascendente.
*/

// Función del método burbuja
void ascendente(int a, int b, int c){
    
    if (a >= b && a >= c){
        if (b >= c){
            printf("%d %d %d", c, b, a);
        }else{
            printf("%d %d %d", b, c, a);
        }
    }

    if (b >= a && b >= c){
        if (a >= c){
            printf("%d %d %d", c, a, b);
        }else{
            printf("%d %d %d", a, c, b);
        }
    }

    if (c >= a && c >= b){
        if (b >= a){
            printf("%d %d %d", a, b, c);
        }else{
            printf("%d %d %d", b, a, c);
        }
    }
}

int main(){

    // Variables
    int a, b, c;

    // Solicitamos la información al usuario
    printf("Escribe 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    fflush(stdin);

    // Procesamos los datos y los mostramos por pantalla
    ascendente(a,b,c);

    return 0;
}
