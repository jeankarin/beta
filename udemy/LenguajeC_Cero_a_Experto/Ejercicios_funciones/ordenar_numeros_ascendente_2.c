#include <stdio.h>

/*
Ordenar los numeros en orden ascendente
*/

void ordenarNum(int n1, int n2, int n3){
    if (n1 >= n2 && n1 >= n3){
        if (n2 >= n3){
            printf("%d %d %d", n3, n2, n1);
        }
        else{
            printf("%d %d %d", n2, n3, n1);
        }
    }

    if (n2 >= n1 && n2 >= n3){
        if (n1 >= n3){
            printf("%d %d %d", n3, n1, n2);
        }
        else{
            printf("%d %d %d", n1, n3, n2);
        }
    }

    if (n3 >= n1 && n3 >= n2){
        if (n1 >= n2){
            printf("%d %d %d", n2, n1, n3);
        }
        else{
            printf("%d %d %d", n1, n2, n3);
        }
    }
}

int main(){

    // Variables
    int n1, n2, n3;

    // Solicitamos la información al usuario
    printf("Escribe 3 numeros para ordenarlos de menos a mayor: ");
    scanf("%d %d %d", &n1,&n2,&n3);

    // Procesamos los datos y los mostramos por pantalla
    ordenarNum(n1,n2,n3);

    return 0;
}
